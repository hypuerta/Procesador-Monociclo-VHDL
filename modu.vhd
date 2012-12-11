library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity modu is
    Port ( cwp_modu : in  STD_LOGIC_VECTOR (2 downto 0);
           mux_cwp : in  STD_LOGIC;
			  rst : in  STD_LOGIC;
           cwp_in : out  STD_LOGIC_VECTOR (2 downto 0));
end modu;

architecture Arq_modu of modu is
begin
	process(cwp_modu, mux_cwp)
	begin
	if(rst='1')then
		cwp_in<="000";
	else
		if(mux_cwp='0')then
			cwp_in<=cwp_modu + "001";
		else
			cwp_in<=cwp_modu - "001";
		end if;
	end if;
	end process;
end Arq_modu;
