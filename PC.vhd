LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_signed.all;

ENTITY PC IS
    PORT(pc4		   : IN  std_logic_vector(31 downto 0);
			br_pc		   : IN  std_logic_vector(31 downto 0);
			en_pc		   : IN  std_logic;
			rst			: IN  std_logic;
			clkFPGA		: in STD_LOGIC; 
			alu_out	   : IN  std_logic_vector(31 downto 0);
			disp30	   : IN  std_logic_vector(31 downto 0);
			pc_src      : IN  std_logic_vector(1 downto 0);
         pc_out        : OUT std_logic_vector(31 downto 0));
END pc;

ARCHITECTURE Arq_PC OF pc IS

signal p :std_logic_vector(31 downto 0):="00000000000000000000000000000000";
signal tm:std_logic:=en_pc;
	BEGIN
		PROCESS(pc4,br_pc,alu_out,disp30,pc_src,p,tm,clkFPGA)
		BEGIN
		if(rst='1')then
			pc_out<="00000000000000000000000000000000";
		else
			if(rising_edge(clkFPGA))then
			--if(conv_integer(pc4)<100)then
				 CASE pc_src IS
					WHEN "00" => p<=pc4+"00000000000000000000000000000001";
									 pc_out<=p;
					WHEN "01" => p<=br_pc;
									 pc_out<=p;
					WHEN "10" => p<=alu_out;
									 pc_out<=p;
					WHEN "11" => p<=disp30*disp30*disp30*disp30 + p;
									 pc_out<=p;
					WHEN OTHERS => pc_out <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
				 END CASE;
				 
			end if;
		
		end if;
		END PROCESS;
END Arq_PC;