--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:49:41 09/03/2020
-- Design Name:   
-- Module Name:   C:/Users/Saman/Xilinx/Projects/ComputerArc3/final_sequence_test.vhd
-- Project Name:  ComputerArc3
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
  
ENTITY final_sequence_test IS
END final_sequence_test;
 
ARCHITECTURE behavior OF final_sequence_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT final_sequence_detector
    PORT(
         A : IN  std_logic;
         Clk : IN  std_logic;
         Reset : IN  std_logic;
         B : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal Clk : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal B : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: final_sequence_detector PORT MAP (
          A => A,
          Clk => Clk,
          Reset => Reset,
          B => B
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      A <= '0';
		Reset <= '0';
      wait for 100 ns;	
		Reset <= '1';
		A <=  '1';
      wait for Clk_period*10;
		A <= '0';
      wait for Clk_period;
		A <= '1';
      wait for Clk_period*2;
		A <= '0';
      wait for Clk_period;
		A <= '1';
      wait for Clk_period;
		A <= '0';
      wait for Clk_period;
		A <= '1';
      wait for Clk_period*4;


      wait;
   end process;

END;
