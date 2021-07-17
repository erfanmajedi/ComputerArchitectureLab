library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity dff is
    Port ( D : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
			  Reset : in  STD_LOGIC;
           Q : out  STD_LOGIC);
end dff;

architecture Behavioral of dff is

begin
	process(Clk,Reset)
	begin 
		if(Reset='0') then 
			Q <= '0';
		else if(rising_edge(Clk)) then
			Q <= D; 
		end if;      
	end process;  
end Behavioral;

