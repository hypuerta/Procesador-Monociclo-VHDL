library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity rd_mu is
    Port ( rd_mux : in  STD_LOGIC;
           rd : in  STD_LOGIC_VECTOR (4 downto 0);
           rd_in : out  STD_LOGIC_VECTOR (4 downto 0));
end rd_mu;

architecture Behavioral of rd_mu is

begin
	process(rd_mux, rd)
	begin
		case rd_mux is
			when '0'=> rd_in<=rd;
			when '1' => rd_in<="11111";
			when others => rd_in<="XXXXX";
		end case;
	end process;
end Behavioral;