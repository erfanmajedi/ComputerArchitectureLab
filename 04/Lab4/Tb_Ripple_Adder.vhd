--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:51:25 04/13/2021
-- Design Name:   
-- Module Name:   C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/04/Lab4/Tb_Ripple_Adder.vhd
-- Project Name:  Lab4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Ripple_Adder
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
 
ENTITY Tb_Ripple_Adder IS
END Tb_Ripple_Adder;
 
ARCHITECTURE behavior OF Tb_Ripple_Adder IS
 

COMPONENT Ripple_Adder
PORT(
A : IN std_logic_vector(3 downto 0);
B : IN std_logic_vector(3 downto 0);
Cin : IN std_logic;
S : OUT std_logic_vector(3 downto 0);
Cout : OUT std_logic
);
END COMPONENT;
 
--Inputs
signal A : std_logic_vector(3 downto 0) := "0000" ;
signal B : std_logic_vector(3 downto 0) := "0000";
signal Cin : std_logic := '0';
 
--Outputs
signal S : std_logic_vector(3 downto 0);
signal Cout : std_logic;
 
BEGIN
 
-- Instantiate the Unit Under Test (UUT)
uut: Ripple_Adder PORT MAP (
A => A, B => B, Cin => Cin, S => S, Cout => Cout
);
 
-- Stimulus process
stim_proc: process
begin
-- hold reset state for 10 ns.
wait for 10 ns;
A <= "0110";
B <= "1100";
 
wait for 10 ns;
A <= "1111";
B <= "1100";
 
wait for 10 ns;
A <= "0110";
B <= "0111";
 
wait for 10 ns;
A <= "0110";
B <= "1110";
 
wait for 100 ns;
A <= "1111";
B <= "1111";
 
wait;
 
end process;
 
END;

