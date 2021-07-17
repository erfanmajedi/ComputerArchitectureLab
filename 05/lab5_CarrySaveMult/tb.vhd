LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY mult_tb IS
END mult_tb;
 
ARCHITECTURE behavior OF mult_tb IS
 

COMPONENT CSMult is
Port ( 	A : in STD_LOGIC_VECTOR (3 downto 0);
	B : in STD_LOGIC_VECTOR (3 downto 0);
	P : out STD_LOGIC_VECTOR (7 downto 0));
END COMPONENT;
 
signal A : std_logic_vector(3 downto 0) := "0000" ;
signal B : std_logic_vector(3 downto 0) := "0000";
signal P : std_logic_vector(7 downto 0) := "00000000";
 
BEGIN
 
-- Instantiate the Unit Under Test (UUT)
uut: CSMult PORT MAP (
A => A, B => B, P => P
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

