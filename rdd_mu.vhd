library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity rdd_mu is
    Port ( rdd_mux : in  STD_LOGIC_VECTOR (1 downto 0);
           alu_out : in  STD_LOGIC_VECTOR (31 downto 0);
           memData : in  STD_LOGIC_VECTOR (31 downto 0);
           pc : in  STD_LOGIC_VECTOR (31 downto 0);
           rdd_in : out  STD_LOGIC_VECTOR (31 downto 0));
end rdd_mu;

architecture Behavioral of rdd_mu is

begin
	process(rdd_mux, alu_out, memData, pc)
	begin
		case rdd_mux is
			when "00" => rdd_in<=alu_out;
			when "01" => rdd_in<=memData;
			when "10" => rdd_in<=pc;
			when others => rdd_in<="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
		end case;
	end process;
end Behavioral;

