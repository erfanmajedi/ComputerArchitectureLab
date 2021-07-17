--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:36:25 04/13/2021
-- Design Name:   
-- Module Name:   C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/04/Lab4/FA_tb.vhd
-- Project Name:  Lab4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FA
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
 
entity fa_tb is
end entity;

architecture tb of fa_tb is
component FA is
Port ( 	A, B, Cin : in STD_LOGIC;
	S, Cout : out STD_LOGIC);
end component;

signal A, B, Cin, S, Cout : STD_LOGIC;

begin

uut : FA port map(
A => A, B => B, Cin => Cin, S => S, Cout => Cout);

stim : process 
begin

A <= '0';
B <= '0';
Cin <= '0';
wait for 10 ns;
assert ((S = '0') and (Cout = '0'))
report "test failed for input combination 000" severity error;

A <= '0';
B <= '0';
Cin <= '1';
wait for 10 ns;
assert ((S = '1') and (Cout = '0'))
report "test failed for input combination 001" severity error;

A <= '0';
B <= '1';
Cin <= '0';
wait for 10 ns;
assert ((S = '1') and (Cout = '0'))
report "test failed for input combination 010" severity error;

A <= '0';
B <= '1';
Cin <= '1';
wait for 10 ns;
assert ((S = '0') and (Cout = '1'))
report "test failed for input combination 011" severity error;

A <= '1';
B <= '0';
Cin <= '0';
wait for 10 ns;
assert ((S = '1') and (Cout = '0'))
report "test failed for input combination 100" severity error;

A <= '1';
B <= '0';
Cin <= '1';
wait for 10 ns;
assert ((S = '0') and (Cout = '1'))
report "test failed for input combination 101" severity error;

A <= '1';
B <= '1';
Cin <= '0';
wait for 10 ns;
assert ((S = '0') and (Cout = '1'))
report "test failed for input combination 110" severity error;

A <= '1';
B <= '1';
Cin <= '1';
wait for 10 ns;
assert ((S = '1') and (Cout = '1'))
report "test failed for input combination 111" severity error;
wait;

end process;
end tb;
