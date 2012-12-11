----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:53:50 11/24/2012 
-- Design Name: 
-- Module Name:    icc - Arq_icc 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity icc is
    Port ( icc_en : in STD_LOGIC;
			  icc_in : in  STD_LOGIC_VECTOR (3 downto 0);
           icc_out : out  STD_LOGIC_VECTOR (3 downto 0));
end icc;


architecture Arq_icc of icc is
	signal reg: std_logic_vector(3 downto 0);
begin
	process(icc_in,reg)
	begin
		if(icc_en='1')then
			icc_out<=icc_in;
		end if;
	end process;
end Arq_icc;

