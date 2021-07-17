library IEEE;

use IEEE.STD_LOGIC_1164.ALL;

use IEEE.STD_LOGIC_ARITH.ALL;

use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity com4_tb is
end entity;

architecture tb of com4_tb is
component comparator4bit is
Port( 
	I,K  			 : in std_logic_vector(3 downto 0);
 	LT   			 : out std_logic; -- '1' if A < B else '0'
 	EQ   			 : out std_logic;-- '1' if A = B else '0'
 	GT  			 : out std_logic-- '1' if A > B else '0'
);
end component;

signal I,K        : STD_LOGIC_VECTOR(3 downto 0);
signal LT, EQ,GT  : STD_LOGIC;

begin



uut: comparator4bit
port map
(
	I => I, K => K, LT => LT, EQ => EQ, GT => GT
);

stim: process
begin

I <= "0001" ;
K <= "1001" ;

wait for 20 ns;

I <= "1111" ;
K <= "0101" ;
wait for 20 ns;

I <= "1001" ;
K <= "1001" ;
wait for 20 ns;

wait;

end process;

end tb;