----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:58:36 05/25/2021 
-- Design Name: 
-- Module Name:    divider - Behavioral 
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
use IEEE.numeric_std.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity divider is
    Port ( AQ : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           Q : out  STD_LOGIC_VECTOR (3 downto 0);
			  clk : in STD_LOGIC;
	   overflow : out STD_LOGIC:='0'
		);
end divider;

architecture Behavioral of divider is
	signal sc : integer:= 8;
	signal ERA : std_logic_vector(8 downto 0);

begin


		Q <= ERA(3 downto 0);
		
		
	process(AQ,B,clk)
begin

		-- start before first clk!
			if (sc = 8) then
					ERA(8) <= '0';
					ERA(7 downto 0) <= AQ; 
					if(AQ(7 downto 4) < B ) then
						overflow <= '0';
					else 
						overflow <= '1';
					end if;
		  end if;
		
		
	if(rising_edge(clk) and sc > 0) then

		if(sc = 8 or sc = 6 or sc = 4 or sc = 2 or sc = 0)	then
			ERA(8 downto 1) <= ERA(7 downto 0);
			sc <= sc - 1;
		else

			if (ERA(8) = '1') then
				ERA(8 downto 4) <= ERA(7 downto 4) + (not B) + "00001";
				ERA(0) <= '1';
			else
				if (ERA(7 downto 4) >= B) then
				   ERA(8 downto 4) <= ERA(7 downto 4) + (not B) + "00001";
					ERA(0) <= '1';
				else
					ERA(0) <= '0';
				end if;
			end if;
			sc <= sc - 1;
	end if;
	end if;
end process;
	
end Behavioral;

