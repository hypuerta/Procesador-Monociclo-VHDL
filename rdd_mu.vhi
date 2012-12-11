
-- VHDL Instantiation Created from source file rdd_mu.vhd -- 18:00:45 12/08/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT rdd_mu
	PORT(
		rdd_mux : IN std_logic_vector(1 downto 0);
		alu_out : IN std_logic_vector(31 downto 0);
		memData : IN std_logic_vector(31 downto 0);
		pc : IN std_logic_vector(31 downto 0);          
		rdd_in : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_rdd_mu: rdd_mu PORT MAP(
		rdd_mux => ,
		alu_out => ,
		memData => ,
		pc => ,
		rdd_in => 
	);


