library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity instruction is
    Port ( inst : in  STD_LOGIC_VECTOR (31 downto 0):="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
           op2 : out  STD_LOGIC_VECTOR (2 downto 0):= "XXX";
           op1 : out  STD_LOGIC_VECTOR (1 downto 0):="XX";
           rs1 : out  STD_LOGIC_VECTOR (4 downto 0):="XXXXX";
           rs2 : out  STD_LOGIC_VECTOR (4 downto 0):="XXXXX";
	    	  rd : out  STD_LOGIC_VECTOR (4 downto 0):="XXXXX";
           cond : out  STD_LOGIC_VECTOR (3 downto 0):="XXXX";
           op3 : out  STD_LOGIC_VECTOR (5 downto 0):="XXXXXX";
           disp22 : out  STD_LOGIC_VECTOR (21 downto 0):="XXXXXXXXXXXXXXXXXXXXXX";
           simm13 : out  STD_LOGIC_VECTOR (12 downto 0):="XXXXXXXXXXXXX";
           i : out  STD_LOGIC:='X'; 
	  	 	  a : out  STD_LOGIC:='X'; 
           disp30 : out  STD_LOGIC_VECTOR (29 downto 0):="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
end instruction;

architecture Behavioral of instruction is
begin
	process(inst)
	begin
			if(inst(31 downto 30)="01")then
								op1 <= inst(31 downto 30);
								disp30 <= inst(29 downto 0);
			end if;
			if(inst(31 downto 30)="00")then
								op1<= inst(31 downto 30);
								a<= inst(29);
								cond<= inst(28 downto 25);
								op2<= inst(24 downto 22);
								disp22<=inst(21 downto 0);
			end if;
			if(inst(31 downto 30)="10")then	
								op1<= inst(31 downto 30);
								rd <= inst(29 downto 25);
								op3<=inst(24 downto 19);
								rs1<=inst(18 downto 14);
								i<=inst(13);
								if(inst(13)='0')then
									rs2<=inst(4 downto 0);
								else
									simm13<=inst(12 downto 0);
								end if;
			end if;
			if(inst(31 downto 30)="11")then
								op1<= inst(31 downto 30);
								rd <= inst(29 downto 25);
								op3<=inst(24 downto 19);
								rs1<=inst(18 downto 14);
								i<=inst(13);
								if(inst(13)='0')then
									rs2<=inst(4 downto 0);
								else
									simm13<=inst(12 downto 0);
								end if;
			end if;
	end process;
end Behavioral;

