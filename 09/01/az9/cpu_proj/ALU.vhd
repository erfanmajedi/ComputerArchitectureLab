----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:32:45 09/18/2020 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
      use ieee.std_logic_1164.all;
		use ieee.math_real.all;
		use ieee.Numeric_Std.all;
		use ieee.std_logic_unsigned.all;
		use ieee.Std_Logic_Arith.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
port(
	data_in : in std_logic_vector (27 downto 0);
	opcode : in std_logic_vector (3 downto 0) ;
	reset,clk : in std_logic;
	carry : out std_logic;
	data_out : out std_logic_vector (27 downto 0)
);
end ALU;

architecture Behavioral of ALU is

		signal tmp : std_logic_vector(9 downto 0);

begin
		
		 
				process(clk, reset)
					begin
					
				if(reset = '1') then
					data_out <= (others=>'Z');
					
				end if;

				
				if(rising_edge(clk) and reset = '0') then

					case opcode is
						when "0010" =>  tmp <= ("0" & data_in(17 downto 9)) + ("0" & data_in(8 downto 0));  -- sub
											carry <= tmp(9);
											data_out(27 downto 18) <= tmp;
											data_out (17 downto 0) <= data_in(17 downto 0);
											
						when "0011" => tmp <= ("0" & data_in(17 downto 9)) - ("0" & data_in(8 downto 0));  -- sub
											carry <= tmp(9);
											data_out(27 downto 18) <= tmp;
											data_out (17 downto 0) <= data_in(17 downto 0);
											
						when "0110" =>  for i in 0 to conv_integer(data_in(9 downto 0)) loop
												data_out(26 downto 19) <= data_in(18 downto 11);
												data_out(27) <= data_in (10);
											end loop;
											--data_out (18 downto 0) <= data_in(18 downto 0);

						when "0111" =>	 for i in 0 to conv_integer(data_in(9 downto 0)) loop
												data_out(27 downto 20) <= data_in(17 downto 10);
												data_out(19) <= data_in (18);
											end loop;
											--data_out (20 downto 0) <= data_in(20 downto 0);											

						when "1000" => data_out(26 downto 18) <= data_in(17 downto 9) and data_in(8 downto 0);
											data_out (27) <= '0';
											--data_out (18 downto 0) <= data_in(18 downto 0);

						
						when "1001" => data_out(26 downto 18) <= data_in(17 downto 9) xor data_in(8 downto 0);
											data_out (27) <= '0';
											--data_out (18 downto 0) <= data_in(18 downto 0);

						
						when "1010" => data_out(26 downto 18) <= data_in(17 downto 9) or data_in(8 downto 0);
											data_out (27) <= '0';
											--data_out (18 downto 0) <= data_in(18 downto 0);
						
						when "1011" => data_out(27 downto 14) <= not (data_in(13 downto 0));	
											--data_out (13 downto 0) <= data_in(13 downto 0);
											
						when "1110" => for i in 0 to conv_integer(data_in(9 downto 0)) loop
												data_out(26 downto 19) <= data_in(18 downto 11);
												data_out(27) <= '0';
											end loop;
											--data_out (18 downto 0) <= data_in(18 downto 0);
						
						when "1111" => for i in 0 to conv_integer(data_in(9 downto 0)) loop
												data_out(27 downto 20) <= data_in(17 downto 10);
												data_out(19) <= '0';
											end loop;
											--data_out (20 downto 0) <= data_in(20 downto 0);
											 
						when others => null;
						
					end case;
				end if;

			end process;
			
			
--		 carry <= data_out(27) when (reset = '0' and oe = '1' and oe_tmp = '0') else 'Z';



end Behavioral;

