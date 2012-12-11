
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sign_extension is
    Port ( simm13 : in  STD_LOGIC_VECTOR (12 downto 0);
           simm32 : out  STD_LOGIC_VECTOR (31 downto 0):="00000000000000000000000000000000");
end sign_extension;

architecture Behavioral of sign_extension is

begin
	process(simm13)
	begin
		simm32(12 downto 0) <= simm13;
		simm32(31 downto 13) <= (31 downto 13 => simm13(12));
	end process;

end Behavioral;

