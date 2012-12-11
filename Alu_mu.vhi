
-- VHDL Instantiation Created from source file Alu_mu.vhd -- 17:34:01 12/08/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Alu_mu
	PORT(
		Alu_mux : IN std_logic;
		op3_in : IN std_logic_vector(5 downto 0);          
		op3 : OUT std_logic_vector(5 downto 0)
		);
	END COMPONENT;

	Inst_Alu_mu: Alu_mu PORT MAP(
		Alu_mux => ,
		op3_in => ,
		op3 => 
	);


