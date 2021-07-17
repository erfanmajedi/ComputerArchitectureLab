library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_textio.all;
use IEEE.std_logic_unsigned.all;

entity FA is
 Port ( A : in STD_LOGIC;
    	B : in STD_LOGIC;
    	Cin : in STD_LOGIC;
    	S : out STD_LOGIC;
    	Cout : out STD_LOGIC);
end FA;

architecture gatelevel of FA is

begin

 S <= A XOR B XOR Cin ;
 Cout <= (A AND B) OR (Cin AND A) OR (Cin AND B) ;

end gatelevel;
