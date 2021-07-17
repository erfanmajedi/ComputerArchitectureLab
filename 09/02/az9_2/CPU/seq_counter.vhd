library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;


entity sequence_counter is
	Port (CLK : in  STD_LOGIC;
			CLR : in  STD_LOGIC;
         output : out  STD_LOGIC_VECTOR(3 downto 0));
end sequence_counter;

architecture Behavioral of sequence_counter is
	signal tmp: STD_LOGIC_VECTOR(3 downto 0);
begin

	process(CLK) 
	begin
		if (CLR = '1') then
			tmp <= "0000";
		else
			tmp <= tmp + "0001";
		end if;
	end process;
	
	output <= tmp;
	
end Behavioral;