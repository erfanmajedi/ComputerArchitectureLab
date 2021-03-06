library IEEE;
use IEEE.std_logic_1164.all;
entity comparator is
port (
 	A,B   : in std_logic;
	l,e,g : in std_logic;
 	LT    : out std_logic; -- '1' if A < B else '0'
 	EQ    : out std_logic;-- '1' if A = B else '0'
 	GT    : out std_logic-- '1' if A > B else '0'
 );
end comparator;
architecture gatelevel of comparator is


begin
	
	LT <= ((not A) and B) or (l and (A xnor B));
	GT <= ((not B) and A) or (g and (A xnor B));
	EQ <= (A xnor B) and (e);
 
end gatelevel;
