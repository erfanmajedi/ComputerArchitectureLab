----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:28:38 05/04/2021 
-- Design Name: 
-- Module Name:    Reg_4bits - Behavioral 
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

entity Reg_4bits is
    Port ( Parallel_in : in  STD_LOGIC_VECTOR (3 downto 0);
           LR : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  load : in STD_LOGIC;
           reg_out : out  STD_LOGIC_VECTOR (3 downto 0));
end Reg_4bits;

architecture Behavioral of Reg_4bits is
	signal shifted_number: STD_LOGIC_VECTOR(3 downto 0);
	signal state : STD_LOGIC_VECTOR( 1 downto 0);
begin
		--state <= LR;
		process(clk, rst,shifted_number)
		begin
	
		if (rst = '1') then
			shifted_number <= "0000";
		elsif (rising_edge(clk))  then
			if (load = '0') then
				shifted_number <= parallel_in;
			else
				-- right shift logical
				if ( LR ="11") then
					shifted_number(2 downto 0) <= shifted_number(3 downto 1);
					shifted_number(3) <= '0';
				-- right shift arithmetic
				elsif (LR ="01") then
					shifted_number(2 downto 0) <= shifted_number(3 downto 1);
					shifted_number(3) <= shifted_number(2);
				-- left shift logical or arithmetic
				elsif (LR = "10") then
					shifted_number(3 downto 1) <= shifted_number(2 downto 0);
					shifted_number(0) <= '0';
				-- constant
				else
					shifted_number <= shifted_number; --Parallel_in;
				end if;
			end if;
		end if;
		reg_out <= shifted_number;
		end process;

end Behavioral;

