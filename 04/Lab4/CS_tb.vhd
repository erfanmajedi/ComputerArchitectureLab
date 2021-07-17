--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:25:08 04/13/2021
-- Design Name:   
-- Module Name:   C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/04/Lab4/CS_tb.vhd
-- Project Name:  Lab4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: carry_select_adder
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
 
ENTITY Tb_carry_select_adder IS
END Tb_carry_select_adder;
 
ARCHITECTURE behavior OF Tb_carry_select_adder IS
 
-- Component Declaration for the Unit Under Test (UUT)
 
COMPONENT carry_select_adder
PORT(
	X : IN std_logic_vector(3 downto 0);
	Y : IN std_logic_vector(3 downto 0);
	CARRY_IN : IN std_logic;
	SUM : OUT std_logic_vector(3 downto 0);
	CARRY_OUT : OUT std_logic
);
END COMPONENT;
 
--Inputs
signal X : std_logic_vector(3 downto 0) := "0000";
signal Y : std_logic_vector(3 downto 0) := "0000";
signal CARRY_IN : std_logic := '0';
 
--Outputs
signal SUM : std_logic_vector(3 downto 0);
signal CARRY_OUT : std_logic;
 
BEGIN
 
-- Instantiate the Unit Under Test (UUT)
uut: carry_select_adder PORT MAP (
X => X,
Y => Y,
CARRY_IN => CARRY_IN,
SUM => SUM,
CARRY_OUT => CARRY_OUT
);
 
 -- Stimulus process
stim_proc: process
begin
 -- hold reset state for 10 ns.
wait for 10 ns;
X <= "1011";
Y <= "1111";
 
wait for 10 ns;
X <= "0001";
Y <= "1010";
 
wait for 10 ns;
X <= "0111";
Y <= "1111";
wait;
end process;
 
END behavior;
