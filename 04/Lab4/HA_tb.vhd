--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:40:47 04/13/2021
-- Design Name:   
-- Module Name:   C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/04/Lab4/HA_tb.vhd
-- Project Name:  Lab4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: HA
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
 
entity half_adder_tb is
end entity;

architecture tb of half_adder_tb is
component HA is
port( a,b : IN std_logic;
			S: OUT std_logic;
			C : OUT std_logic);
end component;

signal a,b,S,C: std_logic;

begin

uut: HA port map(
a => a, b => b,
S => S,
C	=> C);

stim: process
begin

a <= '0';
b <= '0';
wait for 20 ns;

a <= '0';
b <= '1';
wait for 20 ns;

a <= '1';
b <= '0';
wait for 20 ns;

a <= '1';
b <= '1';
wait for 20 ns;

wait;

end process;

end tb;
