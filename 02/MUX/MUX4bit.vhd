library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity MUX4bit is
	Port(
	D: in std_logic_vector(3 downto 0);
	S : in std_logic_vector(1 downto 0);
   R : out STD_LOGIC);
end MUX4bit;

architecture structure of MUX4bit is
	component MUX is
	Port ( D1 : in  STD_LOGIC;
           D2 : in  STD_LOGIC;
			  S : in  STD_LOGIC;
           R : out  STD_LOGIC);
	end component MUX;
	signal temp0,temp1: std_logic;
begin
	mux_layer0_0: MUX port map ( D1 => D(0), D2 => D(1),S => S(0),R=>temp0);
	mux_layer0_1: MUX port map ( D1 => D(2), D2 => D(3),S => S(0),R=>temp1);
	
	mux_layer1_0: MUX port map ( D1 => temp0, D2 => temp1,S => S(1),R=>R);
end structure;
