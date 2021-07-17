--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:48:09 05/11/2021
-- Design Name:   
-- Module Name:   C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/07/Lab7/dual_tb.vhd
-- Project Name:  Lab7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RAM_dual
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
 
ENTITY dual_tb IS
END dual_tb;
 
ARCHITECTURE behavior OF dual_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM_dual
    PORT(
         clk : IN  std_logic;
         address : IN  std_logic_vector(2 downto 0);
         data_in : IN  std_logic_vector(15 downto 0);
         WR : IN  std_logic;
         RD : IN  std_logic;
         reset : IN  std_logic;
         data_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal address : std_logic_vector(2 downto 0) := (others => '0');
   signal data_in : std_logic_vector(15 downto 0) := (others => '0');
   signal WR : std_logic := '0';
   signal RD : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM_dual PORT MAP (
          clk => clk,
          address => address,
          data_in => data_in,
          WR => WR,
          RD => RD,
          reset => reset,
          data_out => data_out
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
		
	wait for clk_period*10;
	
	data_in <= "1100001101011101";
	address <= "000";
	WR <= '1';
	RD <= '0';
	reset <= '0';
	
	wait for 20 ns; 
	data_in <= "1100001101011101";
	address <= "000";
	WR <= '1';
	RD <= '0';
	reset <= '1';
	
	wait for 20 ns; 
	data_in <= "1100001101011101";
	address <= "000";
	WR <= '0';
	RD <= '1';
	reset <= '1';
	
	wait for 20 ns; 
	data_in <= "1100001101011100";
	address <= "001";
	WR <= '1';
	RD <= '0';
	reset <= '1';
	
	wait for 20 ns; 
      wait;
   end process;

END;
