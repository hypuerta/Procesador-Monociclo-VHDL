library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity i_mux is
    Port ( i : in  STD_LOGIC;
           rsd2_in: in  STD_LOGIC_VECTOR (31 downto 0);
			  simm32 : in  STD_LOGIC_VECTOR (31 downto 0);
           rsd2 : out  STD_LOGIC_VECTOR (31 downto 0));
end i_mux;

architecture Behavioral of i_mux is

begin
	process(i, rsd2_in, simm32)
	begin
		if(i='0')then
			 rsd2<=rsd2_in;
		elsif(i='1')then
			 rsd2<=simm32;
		end if;
	end process;
end Behavioral;