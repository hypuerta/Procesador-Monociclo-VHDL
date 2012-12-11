library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use std.textio.all;

entity InstructionMemory is 
	Port (Address:in STD_LOGIC_VECTOR (31 downto 0); 
			clkFPGA: in STD_LOGIC; 
			reset: in STD_LOGIC; 
			outInstruction:out STD_LOGIC_VECTOR (31 downto 0));
end InstructionMemory;

architecture arch_InstructionMemory of InstructionMemory is 
	type RamType is array (0 to 31) of bit_vector (31 downto 0);
	impure function InitRamFromFile (RamFileName:in string) return RamType is
		FILE RamFile:text is in RamFileName;
		variable RamFileLine:line;
		variable RAM:RamType;
		begin 
			for I in RamType 'range loop
				readline (RamFile, RamFileLine);
				exit when endfile (RamFile);
				read (RamFileLine, RAM(I));
			end loop;
			return RAM;
		end function;
signal RAM : RamType := InitRamFromFile("prueba_3.data");

begin
	process(clkFPGA,reset,address) begin
		--if(rising_edge(clkFPGA) and clkFPGA='1') then
			if(reset = '1') then
				outInstruction <= (others=>'0');
			else
			if(conv_integer(address)>0)then
				outInstruction <= to_stdlogicvector(RAM(conv_integer(address)));
			end if;
			end if;
		--end if;
	
	end process;
end arch_InstructionMemory;