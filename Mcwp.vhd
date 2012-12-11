library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Mcwp is
    Port ( cwp_en : in  STD_LOGIC;
			  rst : in  STD_LOGIC;
			  clkFPGA : in  STD_LOGIC;
           cwp_in : in  STD_LOGIC_VECTOR (2 downto 0);
           cwp : out  STD_LOGIC_VECTOR (2 downto 0));
end Mcwp;
architecture Arq_Mcwp of Mcwp is
	signal reg: std_logic_vector(2 downto 0);
begin
	process(reg, cwp_in,rst, clkFPGA)
	begin
	if(rst='1')then
		reg<="000";
		cwp<=reg;
	else
		if(rising_edge(clkFPGA))then
			if(cwp_en='1')then
				reg<=cwp_in;
			end if;
			cwp<=reg;
		end if;
	end if;
	end process;
end Arq_Mcwp;

