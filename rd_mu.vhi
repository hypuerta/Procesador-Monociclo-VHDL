
-- VHDL Instantiation Created from source file rd_mu.vhd -- 17:54:25 12/08/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT rd_mu
	PORT(
		rd_mux : IN std_logic;
		rd : IN std_logic_vector(4 downto 0);          
		rd_in : OUT std_logic_vector(4 downto 0)
		);
	END COMPONENT;

	Inst_rd_mu: rd_mu PORT MAP(
		rd_mux => ,
		rd => ,
		rd_in => 
	);


