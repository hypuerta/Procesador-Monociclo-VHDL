
-- VHDL Instantiation Created from source file i_mux.vhd -- 14:24:34 12/07/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT i_mux
	PORT(
		i : IN std_logic;
		rsd2_in : IN std_logic_vector(31 downto 0);
		simm32 : IN std_logic_vector(31 downto 0);          
		rsd2 : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_i_mux: i_mux PORT MAP(
		i => ,
		rsd2_in => ,
		simm32 => ,
		rsd2 => 
	);


