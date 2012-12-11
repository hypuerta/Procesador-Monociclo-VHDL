
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity Processor is
	PORT( clkFPGA: in STD_LOGIC; 
			reset: in STD_LOGIC;
			en_pc	: IN  std_logic;
			br_pc : in std_logic_vector(31 downto 0);
			alu_out : in std_logic_vector(31 downto 0);
			rdd_Out : out std_logic_vector(31 downto 0);--
			pc_src : in std_logic_vector(1 downto 0);
			alu_out_2 : out STD_LOGIC_VECTOR (31 downto 0);--
			icc_out : out STD_LOGIC_VECTOR (2 downto 0)--
			);
end Processor;


architecture Arq_Processor of Processor is 
COMPONENT PC
	PORT(
		pc4 : IN std_logic_vector(31 downto 0);
		br_pc : IN std_logic_vector(31 downto 0);
		en_pc	: IN  std_logic;
		rst	: IN  std_logic;
		clkFPGA: in STD_LOGIC; 
		alu_out : IN std_logic_vector(31 downto 0);
		disp30 : IN std_logic_vector(31 downto 0);
		pc_src : IN std_logic_vector(1 downto 0);          
		pc_out : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	

	COMPONENT InstructionMemory
	PORT(
		Address : IN std_logic_vector(31 downto 0);
		clkFPGA : IN std_logic;
		reset : IN std_logic;          
		outInstruction : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
		
		
	
	COMPONENT instruction
	PORT(
		inst : IN std_logic_vector(31 downto 0);          
		op2 : OUT std_logic_vector(2 downto 0);
		op1 : OUT std_logic_vector(1 downto 0);
		rs1 : OUT std_logic_vector(4 downto 0);
		rs2 : OUT std_logic_vector(4 downto 0);
		rd : OUT std_logic_vector(4 downto 0);
		cond : OUT std_logic_vector(3 downto 0);
		op3 : OUT std_logic_vector(5 downto 0);
		disp22 : OUT std_logic_vector(21 downto 0);
		simm13 : OUT std_logic_vector(12 downto 0);
		i : OUT std_logic;
		a : OUT std_logic;
		disp30 : OUT std_logic_vector(29 downto 0)
		);
	END COMPONENT;


	COMPONENT sign_extension_disp30
	PORT(
		disp30 : IN std_logic_vector(29 downto 0);          
		simm32 : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Register_File
	PORT(
		rs1 : IN std_logic_vector(4 downto 0);
		rs2 : IN std_logic_vector(4 downto 0);
		clk : IN std_logic;
		rw_en : IN std_logic;
		cwp : IN std_logic_vector(2 downto 0);
		rd : IN std_logic_vector(4 downto 0);
		rdd_in : IN std_logic_vector(31 downto 0);          
		rsd1 : OUT std_logic_vector(31 downto 0);
		rsd2 : OUT std_logic_vector(31 downto 0);
		rdd_Out : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Alu
	PORT(
		i: in  STD_LOGIC;
		simm32  : in  STD_LOGIC_VECTOR (31 downto 0);
		alu_op1 : IN std_logic_vector(31 downto 0);
		alu_op2 : IN std_logic_vector(31 downto 0);
		carry : IN std_logic;
		op3 : IN std_logic_vector(5 downto 0);          
		icc_in : OUT std_logic_vector(3 downto 0);
		alu_out : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT sign_extension
	PORT(
		simm13 : IN std_logic_vector(12 downto 0);          
		simm32 : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT icc
	PORT(
		icc_en : IN std_logic;
		icc_in : IN std_logic_vector(3 downto 0);          
		icc_out : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT control_Unit
	PORT(
		rst: in STD_LOGIC;
		op1 : IN std_logic_vector(1 downto 0);
		op2 : IN std_logic_vector(2 downto 0);
		op3 : IN std_logic_vector(5 downto 0);          
		mux_cwp : OUT std_logic;
		rw_en : OUT std_logic;
		icc_en : OUT std_logic;
		br_en : OUT std_logic;
		pc_src : OUT std_logic_vector(1 downto 0);
		alu_mux : OUT std_logic;
		mw_en : OUT std_logic;
		mr_en : OUT std_logic;
		rdd_mux : OUT std_logic_vector(1 downto 0);
		rd_mux : OUT std_logic;
		cwp_en : OUT std_logic
		);
	END COMPONENT;

	COMPONENT branc_Unit
	PORT(
		bc_en : IN std_logic;
		pc : IN std_logic_vector(31 downto 0);
		a : IN std_logic;
		cond : IN std_logic_vector(3 downto 0);
		icc : IN std_logic_vector(3 downto 0);
		disp22 : IN std_logic_vector(21 downto 0);          
		inst_clear : OUT std_logic;
		bn_pc : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT modu
	PORT(
		cwp_modu : IN std_logic_vector(2 downto 0);
		mux_cwp : IN std_logic;       
		rst : in  STD_LOGIC;
		cwp_in : OUT std_logic_vector(2 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Mcwp
	PORT(
		cwp_en : IN std_logic;
		rst : in  STD_LOGIC;
		clkFPGA: in STD_LOGIC; 
		cwp_in : IN std_logic_vector(2 downto 0);          
		cwp : OUT std_logic_vector(2 downto 0)
		);
	END COMPONENT;

	COMPONENT i_mux
	PORT(
		i : IN std_logic;
		rsd2_in : IN std_logic_vector(31 downto 0);
		simm32 : IN std_logic_vector(31 downto 0);          
		rsd2 : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Alu_mu
	PORT(
		Alu_mux : IN std_logic;
		op3_in : IN std_logic_vector(5 downto 0);          
		op3 : OUT std_logic_vector(5 downto 0)
		);
	END COMPONENT;
	
	COMPONENT DataMemory
	PORT(
		mw_en : IN std_logic;
		mr_en : IN std_logic;
		alu_out : IN std_logic_vector(31 downto 0);
		rdd_out : IN std_logic_vector(31 downto 0);          
		memData : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	COMPONENT rd_mu
	PORT(
		rd_mux : IN std_logic;
		rd : IN std_logic_vector(4 downto 0);          
		rd_in : OUT std_logic_vector(4 downto 0)
		);
	END COMPONENT;
	
	COMPONENT rdd_mu
	PORT(
		rdd_mux : IN std_logic_vector(1 downto 0);
		alu_out : IN std_logic_vector(31 downto 0);
		memData : IN std_logic_vector(31 downto 0);
		pc : IN std_logic_vector(31 downto 0);          
		rdd_in : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;


signal aux_pc_out: std_logic_vector(31 downto 0);
signal aux_br_pc: std_logic_vector(31 downto 0);
signal aux_pc4: std_logic_vector(31 downto 0);
signal aux_disp30: std_logic_vector(31 downto 0);
signal aux_disp_30: std_logic_vector(29 downto 0);
signal aux_pc_src: std_logic_vector(1 downto 0);
signal aux_alu_out: std_logic_vector(31 downto 0);
signal aux_outInstruction: std_logic_vector(31 downto 0);
signal aux_op1: std_logic_vector(1 downto 0);
signal aux_op2: std_logic_vector(2 downto 0);
signal aux_op3: std_logic_vector(5 downto 0);
signal aux_rs1: std_logic_vector(4 downto 0);
signal aux_rs2: std_logic_vector(4 downto 0);
signal aux_rd: std_logic_vector(4 downto 0);
signal aux_cond: std_logic_vector(3 downto 0);
signal aux_disp22: std_logic_vector(21 downto 0);
signal aux_simm13: std_logic_vector(12 downto 0);
signal aux_simm32: std_logic_vector(31 downto 0);
signal aux_simm_32: std_logic_vector(31 downto 0);
signal aux_i: std_logic;
signal aux_a: std_logic;
signal aux_rw_en: std_logic;
signal aux_cwp: std_logic_vector(2 downto 0);
signal aux_rsd1: std_logic_vector(31 downto 0);
signal aux_rsd2: std_logic_vector(31 downto 0);
signal aux_carry: std_logic;
signal aux_icc_in: std_logic_vector(3 downto 0);
signal aux_rsd_2: std_logic_vector(31 downto 0);
signal aux_icc_en: std_logic;
signal aux_mux_cwp: std_logic;
signal aux_br_en: std_logic;
signal aux_alu_mux: std_logic;
signal aux_mw_en: std_logic;
signal aux_mr_en: std_logic;
signal aux_rdd_mux: std_logic_vector(1 downto 0);
signal aux_rd_mux: std_logic;
signal aux_cwp_en: std_logic;
signal aux_rw_en_tmp: std_logic;
signal aux_icc_in_tmp: std_logic_vector(3 downto 0);
signal aux_icc_out: std_logic_vector(3 downto 0);
signal aux_inst_clear: std_logic;
signal aux_cwp_modu: std_logic_vector(2 downto 0);
signal aux_cwp_in: std_logic_vector(2 downto 0);
signal a_aux_simm_32: std_logic_vector(31 downto 0);
signal a_aux_op2: std_logic_vector(2 downto 0);
signal a_aux_i: std_logic;
signal aux2_op3: std_logic_vector(5 downto 0);
signal aux_rdd_out: std_logic_vector(31 downto 0);
signal aux_memData: std_logic_vector(31 downto 0);
signal aux_rd_in: std_logic_vector(4 downto 0);
signal aux_rdd_in: std_logic_vector(31 downto 0);





begin

   Inst_PC: PC PORT MAP(
		en_pc => en_pc,
		pc4 => aux_pc_out,
		br_pc => aux_br_pc,
		rst=>reset,
		clkFPGA => clkFPGA,
		alu_out => alu_out,
		disp30 => aux_simm32,
		pc_src => aux_pc_src,
		pc_out => aux_pc_out
	);
	
	
	Inst_InstructionMemory: InstructionMemory PORT MAP(
		Address => aux_pc_out,
		clkFPGA => clkFPGA,
		reset => reset,
		outInstruction => aux_outInstruction
	);
	
	Inst_instruction: instruction PORT MAP(
		inst => aux_outInstruction,
		op2 => aux_op2,
		op1 => aux_op1,
		rs1 => aux_rs1,
		rs2 => aux_rs2,
		rd => aux_rd,
		cond => aux_cond,
		op3 => aux_op3,
		disp22 => aux_disp22,
		simm13 => aux_simm13,
		i => aux_i,
		a => aux_a,
		disp30 => aux_disp_30
	);
	
	Inst_sign_extension_disp30: sign_extension_disp30 PORT MAP(
		disp30 => aux_disp_30,
		simm32 => aux_simm32
	);
	
	Inst_Register_File: Register_File PORT MAP(
		rs1 => aux_rs1,
		rs2 => aux_rs2,
		clk => clkFPGA,
		rw_en => aux_rw_en,
		cwp => aux_cwp,
		rd => aux_rd_in,
		rdd_in => aux_rdd_in,
		rsd1 => aux_rsd1,
		rsd2 => aux_rsd2,
		rdd_Out => aux_rdd_Out
	);
	
	Inst_Alu: Alu PORT MAP(
		i=>a_aux_i,
		simm32=>a_aux_simm_32,
		alu_op1 => aux_rsd1,
		alu_op2 => aux_rsd_2,
		carry => aux_carry,
		op3 => aux2_op3,
		icc_in => aux_icc_in,
		alu_out => aux_alu_out
	);
	
	Inst_sign_extension: sign_extension PORT MAP(
		simm13 => aux_simm13,
		simm32 => aux_simm_32
	);
	
	Inst_icc: icc PORT MAP(
		icc_en => aux_icc_en,
		icc_in => aux_icc_in,
		icc_out => aux_icc_out
	);

	Inst_control_Unit: control_Unit PORT MAP(
		op1 => aux_op1,
		op2 => aux_op2,
		op3 => aux_op3,
		rst=>reset,
		mux_cwp => aux_mux_cwp,
		rw_en => aux_rw_en,
		icc_en => aux_icc_en,
		br_en => aux_br_en,
		pc_src => aux_pc_src,
		alu_mux => aux_alu_mux,
		mw_en => aux_mw_en,
		mr_en => aux_mr_en,
		rdd_mux => aux_rdd_mux,
		rd_mux => aux_rd_mux,
		cwp_en => aux_cwp_en
	);
	
	Inst_branc_Unit: branc_Unit PORT MAP(
		bc_en => aux_br_en,
		pc => aux_pc_out,
		a => aux_a,
		cond => aux_cond,
		icc => aux_icc_out,
		disp22 => aux_disp22,
		inst_clear => aux_inst_clear,
		bn_pc => aux_br_pc
	);

	Inst_modu: modu PORT MAP(
		cwp_modu => aux_cwp,
		mux_cwp => aux_mux_cwp,
		cwp_in => aux_cwp_in,
		rst=>reset
	);

	Inst_Mcwp: Mcwp PORT MAP(
		rst=>reset,
		clkFPGA => clkFPGA,
		cwp_en => aux_cwp_en,
		cwp_in => aux_cwp_in,
		cwp => aux_cwp
		);
	
	Inst_i_mux: i_mux PORT MAP(
		i => aux_i,
		rsd2_in => aux_rsd2,
		simm32 => aux_simm_32,
		rsd2 => aux_rsd_2
	);
	
	Inst_Alu_mu: Alu_mu PORT MAP(
		Alu_mux => aux_alu_mux,
		op3_in => aux_op3,
		op3 => aux2_op3
	);
	
	Inst_DataMemory: DataMemory PORT MAP(
		mw_en => aux_mw_en,
		mr_en => aux_mr_en,
		alu_out => aux_alu_out,--?????
		rdd_out => aux_rdd_out,
		memData => aux_memData
	);
	
	Inst_rd_mu: rd_mu PORT MAP(
		rd_mux => aux_rd_mux,
		rd => aux_rd,
		rd_in => aux_rd_in
	);
	
	Inst_rdd_mu: rdd_mu PORT MAP(
		rdd_mux => aux_rdd_mux,
		alu_out => aux_alu_out,
		memData => aux_memData,
		pc => aux_pc_out,
		rdd_in => aux_rdd_in
	);
	
end Arq_Processor;

