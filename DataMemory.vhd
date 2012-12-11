
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity DataMemory is
    Port ( mw_en : in  STD_LOGIC;
           mr_en : in  STD_LOGIC;
           alu_out : in  STD_LOGIC_VECTOR (31 downto 0);
           rdd_out : in  STD_LOGIC_VECTOR (31 downto 0);
           memData : out  STD_LOGIC_VECTOR (31 downto 0));
end DataMemory;

architecture Behavioral of DataMemory is
	type RamType is array (0 to 520) of std_logic_vector(31 downto 0);
	signal rf: Ramtype;
begin
	process(mw_en,mr_en, alu_out,rdd_out)
	begin
		if(mw_en='1')then
			rf(conv_integer(alu_out))<=rdd_out;
		end if;
		if(mr_en='1')then
			memData<=rf(conv_integer(alu_out));
		end if;
	end process;
end Behavioral;

