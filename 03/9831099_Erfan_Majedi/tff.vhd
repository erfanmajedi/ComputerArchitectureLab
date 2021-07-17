library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tff is
    Port ( T : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           Q : out  STD_LOGIC;
           Qnot : out  STD_LOGIC);
end tff;

architecture Behavioral of tff is

	signal temp: STD_LOGIC;
begin
	process(Clk,Reset)
	begin 
		if(Reset='0') then 
			temp <= '0';
		elsif(rising_edge(Clk)) then
			temp <= T xor temp; 
		end if;      
	end process;
	Q <= temp;
	Qnot <= not temp;
end Behavioral;

