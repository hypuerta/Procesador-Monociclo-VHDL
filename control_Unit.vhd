
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity control_Unit is
    Port ( op1 : in  STD_LOGIC_VECTOR (1 downto 0);
           op2 : in  STD_LOGIC_VECTOR (2 downto 0);
           op3 : in  STD_LOGIC_VECTOR (5 downto 0);
			  rst: in STD_LOGIC;
           mux_cwp : out  STD_LOGIC;
           rw_en : out  STD_LOGIC;
			  icc_en : out  STD_LOGIC;
			  br_en : out  STD_LOGIC;
           pc_src : out  STD_LOGIC_VECTOR (1 downto 0);
           alu_mux : out  STD_LOGIC;
           mw_en : out  STD_LOGIC;
           mr_en : out  STD_LOGIC;
           rdd_mux : out  STD_LOGIC_VECTOR (1 downto 0);
			  rd_mux: out  STD_LOGIC;
           cwp_en : out  STD_LOGIC);
end control_Unit;

architecture Behavioral of control_Unit is
begin
process(op1, op2, op3)
begin
	if(rst='1')then
		pc_src<="00";
	else
		case op1 is
			when "01" => pc_src<="11";--call
							 rdd_mux<="10";
							 rw_en<='1';
							 rd_mux<='1';
							 cwp_en<='0';
			when "00" => pc_src<="01";--branch
							 br_en<='1';
							 icc_en<='1';
							 cwp_en<='0';
			when "11" => if(op3="000000")then --load
								 pc_src<="00";
								 rd_mux<='0';
								 alu_mux<='1';
								 rw_en<='1';
								 mw_en<='0';
								 mr_en<='1';
								 rdd_mux<="01";
								 cwp_en<='0';
							 elsif(op3="000100")then--st
								 pc_src<="00";
								 rd_mux<='0';
								 alu_mux<='1';
								 rw_en<='0';
								 mw_en<='1';
								 mr_en<='0';
								 cwp_en<='0';
								 
							 end if;
			when "10" => if(op3="111100" or op3="111101" or op3="111000")then
								if(op3="111100")then--save
									cwp_en<='1';
									pc_src<="00";
									mux_cwp<='0';
								end if;
								if(op3="111101")then--restore
									cwp_en<='1';
									pc_src<="00";
									mux_cwp<='1';
								end if;
								if(op3="111000")then--jmpl
									pc_src<="10";
									rw_en<='0';
									alu_mux<='1';
									cwp_en<='0';
								end if;
							 else--aritmetico-logicas
								 cwp_en<='0';
								 pc_src<="00";
								 rd_mux<='0';
								 rw_en<='1';
								 rdd_mux<="00";
								 alu_mux<='0';
								 if(op3(4)='1')then--icc
									icc_en<='1';
								 else
									icc_en<='0';
								 end if;	
							 end if;
			when others=>pc_src<="01";				 
		end case;
	end if;
end process;
end Behavioral;

