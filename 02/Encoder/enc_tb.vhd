library IEEE;

use IEEE.STD_LOGIC_1164.ALL;

use IEEE.STD_LOGIC_ARITH.ALL;

use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity encoder_tb is
end entity;

architecture tb of encoder_tb is
component encoder is
Port( 
	    i0,i1,i2,i3 : in  STD_LOGIC;
            y0, y1      : out STD_LOGIC
);
end component;

signal I: STD_LOGIC_VECTOR(3 downto 0);
signal Y: STD_LOGIC_VECTOR(1 downto 0);

begin



uut: encoder
port map
(
	i0 => I(0) , i1 => I(1), i2 => I(2), i3 => I(3), y0 => Y(0), y1 => Y(1) 
);

stim: process
begin

I <= "0001";
wait for 20 ns;

I <= "0010";
wait for 20 ns;

I <= "0100";
wait for 20 ns;

I <= "1000";
wait for 20 ns;
wait;

end process;

end tb;
