library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ripple_counter is
    Port ( T : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR(3 downto 0));
end ripple_counter;
	
architecture Behavioral of ripple_counter is
	component tff is
		Port ( T : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           Q : out  STD_LOGIC;
           Qnot : out  STD_LOGIC);
	end component tff;
	
	signal Qnot : STD_LOGIC_VECTOR(3 downto 0);
begin
	tff_instance3: tff port map ( T => T, Clk => Clk, Reset => Reset, Q => Q(0), Qnot => Qnot(0));
	tff_instance2: tff port map ( T => T, Clk => Qnot(0), Reset => Reset, Q => Q(1), Qnot => Qnot(1));
	tff_instance1: tff port map ( T => T, Clk => Qnot(1), Reset => Reset, Q => Q(2), Qnot => Qnot(2));
	tff_instance0: tff port map ( T => T, Clk => Qnot(2), Reset => Reset, Q => Q(3), Qnot => Qnot(3));
end Behavioral;

