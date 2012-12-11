library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Alu_mu is
    Port ( Alu_mux : in  STD_LOGIC;
           op3_in: in  STD_LOGIC_VECTOR (5 downto 0);
           op3: out  STD_LOGIC_VECTOR (5 downto 0));
end Alu_mu;

architecture Behavioral of Alu_mu is

begin
	process(Alu_mux, op3_in)
	begin
		case Alu_mux is
			when '0'=> op3<=op3_in;
			when '1' => op3<="000000";
			when others =>op3<="XXXXXX";
		end case;
	end process;
end Behavioral;
