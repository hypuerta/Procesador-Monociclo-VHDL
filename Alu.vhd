library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity Alu is
    Port ( i: in  STD_LOGIC;
			  simm32  : in  STD_LOGIC_VECTOR (31 downto 0);
			  alu_op1 : in  STD_LOGIC_VECTOR (31 downto 0);
           alu_op2 : in  STD_LOGIC_VECTOR (31 downto 0);
           carry : in  STD_LOGIC;
           op3 : in  STD_LOGIC_VECTOR (5 downto 0);
			  icc_in : out  STD_LOGIC_VECTOR (3 downto 0);
           alu_out : out  STD_LOGIC_VECTOR (31 downto 0));
end Alu;


architecture Arq_Alu of Alu is

signal alu_out1: std_logic_vector(31 downto 0);
begin
	process(alu_op1, alu_op2, carry, op3, alu_out1)
		begin
				case op3 is 
					when "000000" => alu_out1 <= alu_op1 + alu_op2;
										  alu_out<=alu_out1;
					when "010000" => alu_out1 <= alu_op1 + alu_op2;
										  alu_out<=alu_out1;
					when "001000" => alu_out <= alu_op1 + alu_op2 + carry;
					when "011000" => alu_out <= alu_op1 + alu_op2 + carry;
					when "000100" => alu_out <= alu_op1 - alu_op2;
					when "010100" => alu_out <= alu_op1 - alu_op2;
					when "001100" => alu_out <= alu_op1 - alu_op2 - 1;
					when "011100" => alu_out <= alu_op1 - alu_op2 - 1;
					when "000001" => alu_out <= alu_op1 and alu_op2;
					when "010001" => alu_out <= alu_op1 and alu_op2;
					when "000101" => alu_out <= not (alu_op1 and alu_op2); 
					when "010101" => alu_out <= not (alu_op1 and alu_op2); 
					when "000010" => alu_out <= alu_op1 or alu_op2;
					when "010010" => alu_out <= alu_op1 or alu_op2;
					when "000110" => alu_out <= not (alu_op1 or alu_op2);
					when "010110" => alu_out <= not (alu_op1 or alu_op2);
					when "000011" => alu_out <= alu_op1 xor alu_op2;
					when "010011" => alu_out <= alu_op1 xor alu_op2;
					when "000111" => alu_out <= alu_op1 xnor alu_op2;
					when "010111" => alu_out <= alu_op1 xnor alu_op2;
					when "100101" => alu_out <= to_stdlogicvector(to_bitvector(alu_op1) sll conv_integer(alu_op2));
					when "100110" => alu_out <= to_stdlogicvector(to_bitvector(alu_op1) srl conv_integer(alu_op2));
					when "100111" => alu_out <= to_stdlogicvector(to_bitvector(alu_op1) sra conv_integer(alu_op2));
					when others => alu_out <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
				end case; 
				
				if(op3(4)='1')then
				--condiciones overflow para icc
					if(((alu_op1(31)='1' and alu_op2(31)='1' and alu_out1(31)='0') or (alu_op1(31)='0' and alu_op2(31)='0' and alu_out1(31)='1')) and (op3="010000" or op3="011000"))then
						icc_in(1)<='1';
					else
						icc_in(1)<='0';
					end if;
				--condiciones carry para icc
					if(((alu_op1(31)='1' and alu_op2(31)='1') or (alu_op1(31)='0' and alu_op2(31)='0')) and (op3="010000" or op3="011000" or op3="010100" or op3="011100"))then
						icc_in(0)<='1';
					else
						icc_in(0)<='0';
					end if;
				--negativo icc
					if((alu_op1<alu_op2) and  (op3="010100" or op3="011100"))then
						icc_in(3)<='1';
					else 
						icc_in(3)<='0';
					end if;	
				--zero icc
					if(alu_op1=alu_op2)then
						icc_in(2)<='1';
					else 
						icc_in(2)<='0';
					end if;	
				else	
					icc_in<="XXXX";				
				end if;
	end process;
end Arq_Alu;


