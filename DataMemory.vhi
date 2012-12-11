
-- VHDL Instantiation Created from source file DataMemory.vhd -- 17:46:57 12/08/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT DataMemory
	PORT(
		mw_en : IN std_logic;
		mr_en : IN std_logic;
		alu_out : IN std_logic_vector(31 downto 0);
		rdd_out : IN std_logic_vector(31 downto 0);          
		memData : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_DataMemory: DataMemory PORT MAP(
		mw_en => ,
		mr_en => ,
		alu_out => ,
		rdd_out => ,
		memData => 
	);


