
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sign_extension_disp30 is
    Port ( disp30 : in  STD_LOGIC_VECTOR (29 downto 0);
           simm32 : out  STD_LOGIC_VECTOR (31 downto 0):="00000000000000000000000000000000");
end sign_extension_disp30;

architecture Behavioral of sign_extension_disp30 is

begin
	process(disp30)
	begin
		simm32(29 downto 0) <= disp30;
		simm32(31 downto 30) <= (31 downto 30 => disp30(29));
	end process;

end Behavioral;

