----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:29:35 04/13/2021 
-- Design Name: 
-- Module Name:    FA - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity FA is
Port ( A : in STD_LOGIC;
			B : in STD_LOGIC;
         Cin : in STD_LOGIC;
			S : out STD_LOGIC;
			P : out STD_LOGIC;
			Cout : out STD_LOGIC);
end FA;

architecture Behavioral of FA is

begin
	S <= A xor B xor Cin;
	P <= A xor B;
	Cout <= A and B;


end Behavioral;

