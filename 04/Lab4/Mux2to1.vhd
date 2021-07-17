----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:17:26 04/13/2021 
-- Design Name: 
-- Module Name:    Mux2to1 - Behavioral 
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
entity mux2_1 is
port(
 
	A,B : in STD_LOGIC;
	Sel: in STD_LOGIC;
	Z: out STD_LOGIC
);
end mux2_1;
 
architecture bhv of mux2_1 is
	begin
		process(A,B,Sel)
	begin
		if Sel = '0' then
		Z <= A;
		else
		Z <= B;
		end if;
	end process;
end bhv;
