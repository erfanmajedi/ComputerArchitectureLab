library IEEE;
use IEEE.std_logic_1164.all;
entity comparator4bit is
port (
 	I,K  			 : in std_logic_vector(3 downto 0);
 	LT   			 : out std_logic; -- '1' if A < B else '0'
 	EQ   			 : out std_logic;-- '1' if A = B else '0'
 	GT  			 : out std_logic-- '1' if A > B else '0'
 );
end comparator4bit;
architecture structure of comparator4bit is

component comparator is
port  (
 	A,B   : in std_logic;
	l,e,g : in std_logic;
 	LT    : out std_logic; -- '1' if A < B else '0'
 	EQ    : out std_logic;-- '1' if A = B else '0'
 	GT    : out std_logic-- '1' if A > B else '0'
 );

end component;

signal w1,w2,w3,w4,w5,w6,w7,w8,w9 : std_logic;
begin

	comparator1: comparator port map(A => I(0), B => K(0), l =>'0', e =>'1', g =>'0', LT => w1, EQ => w2, GT => w3);
	comparator2: comparator port map(A => I(1), B => K(1), l => w1, e => w2, g => w3, LT => w4, EQ => w5, GT => w6);
	comparator3: comparator port map(A => I(2), B => K(2), l => w4, e => w5, g => w6, LT => w7, EQ => w8, GT => w9);
	comparator4: comparator port map(A => I(3), B => K(3), l => w7, e => w8, g => w9, LT => LT, EQ => EQ, GT => GT);
	
 
end structure;