library IEEE;

use IEEE.STD_LOGIC_1164.ALL;

use IEEE.STD_LOGIC_ARITH.ALL;

use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity encoder is

    Port( 
	    i0,i1,i2,i3 : in  STD_LOGIC;
            y0, y1      : out STD_LOGIC
);

end encoder;

architecture gatelevel of encoder is

begin

y1 <= i2 or i3;
y0 <= i3 or (i1 and (not i2));

end gatelevel;
