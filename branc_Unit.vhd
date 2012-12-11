library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity branc_Unit is
    Port ( bc_en : in  STD_LOGIC;
           pc : in  STD_LOGIC_VECTOR (31 downto 0);
           a : in  STD_LOGIC;
           cond : in  STD_LOGIC_VECTOR (3 downto 0);
           icc : in  STD_LOGIC_VECTOR (3 downto 0);
           disp22 : in  STD_LOGIC_VECTOR (21 downto 0);
           inst_clear : out  STD_LOGIC;
           bn_pc : out  STD_LOGIC_VECTOR (31 downto 0));
end branc_Unit;

architecture Behavioral of branc_Unit is
signal branch: std_logic;
signal tmp: STD_LOGIC_VECTOR (31 downto 0);
begin
process(bc_en, pc, a, cond, icc, disp22, branch, tmp)
begin
	if(bc_en = '1')then
		tmp(21 downto 0) <= disp22;
		tmp(31 downto 22) <= (31 downto 22 => disp22(21));
		case cond is
			when "1000" => 	bn_pc<=pc+tmp;
									branch<='1';
			when "1001" => 	if(icc(2) = '0')then
										bn_pc<=pc+tmp;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;
			when "0001" => 	if(icc(2) = '1')then
										bn_pc<=pc+tmp;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;
			when "1010" => 	if(icc(3) = '0' and icc(2)='0')then
										bn_pc<=pc+tmp;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;
			when "1011" => 	if(icc(3) = '0')then
										bn_pc<=pc+tmp;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;
	      when "0011" => 	if(icc(3) = '1')then
										bn_pc<=pc+tmp;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;
			when "0010" => 	if(icc(3) = '1' or icc(2) = '1')then
										bn_pc<=pc+tmp;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;
			when "0000" => 	if(icc(2) = '0')then
										bn_pc<=pc+1;
										branch<='1';
									else
										bn_pc <= pc+1;
										branch<='0';
									end if;								
			when others => bn_pc<="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
		end case;
		
		if(a='0')then
			inst_clear<='0';
		else
			if(cond(0)='0' and cond(1)='0' and cond(2)='0')	then
				inst_clear<=branch;
			else
				inst_clear<= not branch;
			end if;
		end if;
	end if;
				
end process;
end Behavioral;