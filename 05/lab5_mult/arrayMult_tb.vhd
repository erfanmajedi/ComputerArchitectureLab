LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY mult_tb IS
END mult_tb;
 
ARCHITECTURE behavior OF mult_tb IS
 

COMPONENT multy is
port (
        x: in  std_logic_vector (3 downto 0);
        y: in  std_logic_vector (3 downto 0);
        P: out std_logic_vector (7 downto 0)
    );
END COMPONENT;
 
signal x : std_logic_vector(3 downto 0) := "0000" ;
signal y : std_logic_vector(3 downto 0) := "0000";
signal P : std_logic_vector(7 downto 0) := "00000000";
 
BEGIN
 
-- Instantiate the Unit Under Test (UUT)
uut: multy PORT MAP (
x => x, y => y, P => P
);
 
-- Stimulus process
stim_proc: process
begin
-- hold reset state for 10 ns.
wait for 10 ns;
x <= "0110";
y <= "1100";
 
wait for 10 ns;
x <= "1111";
y <= "1100";
 
wait for 10 ns;
x <= "0110";
y <= "0111";
 
wait for 10 ns;
x <= "0110";
y <= "1110";
 
wait for 100 ns;
x <= "1111";
y <= "1111";
 
wait;
 
end process;
 
END;

