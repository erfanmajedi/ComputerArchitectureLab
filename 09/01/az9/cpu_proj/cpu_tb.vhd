--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:55:21 09/19/2020
-- Design Name:   
-- Module Name:   E:/Ev/university/semester 4/CA lib/az9/cpu_proj/cpu_tb.vhd
-- Project Name:  cpu_proj
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CPU8BIT2
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY cpu_tb IS
END cpu_tb;
 
ARCHITECTURE behavior OF cpu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CPU8BIT2
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         data : OUT  std_logic_vector(7 downto 0);
         adress : OUT  std_logic_vector(2 downto 0);
         carry : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal data : std_logic_vector(7 downto 0);
   signal adress : std_logic_vector(2 downto 0);
   signal carry : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CPU8BIT2 PORT MAP (
          rst => rst,
          clk => clk,
          data => data,
          adress => adress,
          carry => carry
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      rst <= '1'; 

      wait;
   end process;

END;
