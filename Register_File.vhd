library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity Register_File is
    Port ( rs1 : in  STD_LOGIC_VECTOR (4 downto 0);
           rs2 : in  STD_LOGIC_VECTOR (4 downto 0);
			  clk : in STD_LOGIC;
			  rw_en: in STD_LOGIC;
           cwp : in  STD_LOGIC_VECTOR (2 downto 0);
           rd : in  STD_LOGIC_VECTOR (4 downto 0);
           rdd_in : in  STD_LOGIC_VECTOR (31 downto 0);
           rsd1 : out  STD_LOGIC_VECTOR (31 downto 0);
           rsd2 : out  STD_LOGIC_VECTOR (31 downto 0);
           rdd_Out : out  STD_LOGIC_VECTOR (31 downto 0));
end Register_File;

architecture Arq_Register_File of Register_File is
	type RomType is array (0 to 520) of std_logic_vector(31 downto 0);
	signal rf: Romtype:=(others => "00000000000000000000000000000000");
begin
	process(rs1, rs2,cwp,rd,rdd_in, rw_en, clk,rf)
		begin
--		rf(0)<="00000000000000000000000000000000";
--		rf(1)<="00000000000000000000000000000001";
--		rf(2)<="00000000000000000000000000000010";
--		rf(3)<="00000000000000000000000000000011";
--		rf(4)<="00000000000000000000000000000100";
--		rf(5)<="00000000000000000000000000000101";
--		rf(6)<="00000000000000000000000000000110";
--		rf(7)<="00000000000000000000000000000111";
--		rf(8)<="00000000000000000000000000001000";
--		rf(9)<="00000000000000000000000000001001";
--		rf(10)<="00000000000000000000000000001010";
--		rf(11)<="00000000000000000000000000001011";
--		rf(12)<="00000000000000000000000000001100";
--		rf(13)<="00000000000000000000000000001101";
--		rf(14)<="00000000000000000000000000001110";
--		rf(15)<="00000000000000000000000000001111";
--		rf(16)<="00000000000000000000000000010000";
--		rf(17)<="00000000000000000000000000010001";
--		rf(18)<="00000000000000000000000000010010";
--		rf(19)<="00000000000000000000000000010011";
--		rf(20)<="00000000000000000000000000010100";
			if(rw_en='1')then
				if(rising_edge(clk))then
					if(conv_integer(rd)<8)then
						rf(conv_integer(rd))<=rdd_in;
					else
						rf(conv_integer(rd)+16*conv_integer(cwp))<=rdd_in;
					end if;
				end if;
			end if;
			--	if(rising_edge(clk))then
				if(conv_integer(rs1)<8)then
					rsd1<=rf(conv_integer(rs1));
				else
					rsd1<=rf(conv_integer(rs1)+16*conv_integer(cwp));
				end if;
				if(conv_integer(rs2)<8)then
					rsd2<=rf(conv_integer(rs2));
				else
					rsd2<=rf(conv_integer(rs2)+16*conv_integer(cwp));
				end if;
				if(conv_integer(rd)<8)then
					rdd_Out<=rf(conv_integer(rd));
				else
					rdd_Out<=rf(conv_integer(rd)+16*conv_integer(cwp));
				end if;
				--end if;
	end process;
end Arq_Register_File;
