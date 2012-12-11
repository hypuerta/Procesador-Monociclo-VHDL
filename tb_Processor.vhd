
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_processor IS
END tb_processor;
 
ARCHITECTURE behavior OF tb_processor IS 
    COMPONENT Processor
    PORT(
         clkFPGA : IN  std_logic;
         reset : IN  std_logic;
			en_pc	: IN  std_logic;
         br_pc : IN  std_logic_vector(31 downto 0);
         alu_out : IN  std_logic_vector(31 downto 0);
         pc_src : IN  std_logic_vector(1 downto 0);
			rdd_Out : out std_logic_vector(31 downto 0);--
			alu_out_2 : out STD_LOGIC_VECTOR (31 downto 0);--
			icc_out : out STD_LOGIC_VECTOR (2 downto 0)--
        );
    END COMPONENT;
   --Inputs
   signal clkFPGA : std_logic ;
   signal reset : std_logic ;
	signal en_pc : std_logic ;
   signal br_pc : std_logic_vector(31 downto 0) ;
   signal alu_out : std_logic_vector(31 downto 0) ;
   signal pc_src : std_logic_vector(1 downto 0) ;
	
 	--Outputs
	signal rdd_Out : std_logic_vector(31 downto 0);--
	signal alu_out_2 : STD_LOGIC_VECTOR (31 downto 0);--
	signal icc_out : STD_LOGIC_VECTOR (2 downto 0);--

   -- Clock period definitions
   constant clkFPGA_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Processor PORT MAP (
          clkFPGA => clkFPGA,--
          reset => reset,--
			 en_pc=>en_pc,--
          br_pc => br_pc,--
          alu_out => alu_out,--
          pc_src => pc_src,--
			 rdd_Out=>rdd_Out,--
			 alu_out_2=>alu_out_2,--
			 icc_out => icc_out--
        );

   -- Clock process definitions
   clkFPGA_process :process
   begin
		clkFPGA <= '0';
		wait for clkFPGA_period/2;
		clkFPGA <= '1';
		wait for clkFPGA_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		reset <= '1';
		wait for 100 ns;
		reset<='0';
		pc_src<="00";
      wait;
   end process;

END;
