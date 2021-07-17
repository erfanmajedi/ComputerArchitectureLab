----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:14:32 05/08/2019 
-- Design Name: 
-- Module Name:    CPU8BIT2 - Behavioral 
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
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

entity CPU8BIT2 is
	port ( 
	   rst: in std_logic;
		clk: in std_logic;
	   data: out std_logic_vector(7 downto 0);
		adress: out std_logic_vector(2 downto 0);
		carry : out std_logic
		);
	end;
	
architecture CPU_ARCH of CPU8BIT2 is
	signal akku: std_logic_vector(8 downto 0);  -- 8 bits accumulator + 1 bit carry
	signal adreg: std_logic_vector(2 downto 0);  -- 3 bits to address 8 blocks in memory
	signal pc: std_logic_vector(2 downto 0);   -- 3 bits to address 8 blocks in memory
	signal states: std_logic_vector(3 downto 0);   -- 4 bits : 16 states
	signal hlt : std_logic := '0';
	
	type ram is array (7 downto 0) of STD_LOGIC_VECTOR(7 downto 0);   -- 8 x 8 
	signal memory : ram;
	
begin	
	Process(clk,rst,hlt)
		variable indata : STD_LOGIC_VECTOR( 7 downto 0);
		begin
			If (rst = '0') then
				-- initall memory
				memory(0) <= "00000101";
				memory(1) <= "00011111";
				memory(2) <= "11000101";
				memory(3) <= "11000010";
				memory(4) <= "01000011";
				memory(5) <= "10011000";
				
				-- start execution at memory location 0
				indata := (others => '0');
				adreg <= (others => '0');
				states <= (others => '0');
				akku <= (others => '0');
				pc <= (others => '0');
				hlt <= '0';
			elsIf (rising_edge(clk) and hlt = '0') then
				-- PC / Adress path
				If (states = "0000") then
					pc <= STD_LOGIC_VECTOR(unsigned(adreg) + 1);  -- start fetching
					indata := memory(to_integer(unsigned(pc)));   -- store data from memory to indata
					--adreg <= indata(4 downto 0);
				else
					indata := memory(to_integer(unsigned(adreg)));
					adreg <= pc;
				end If;
				-- ALU / Data Path
				Case states is
					when "0001" => akku(8 downto 0) <= STD_LOGIC_VECTOR("0" & unsigned(akku(7 downto 0)) + "00000" & unsigned(indata(3 downto 0))); -- add
					when "0010" => akku(7 downto 0) <= STD_LOGIC_VECTOR(unsigned(akku(7 downto 0)) - "0000" & unsigned(indata(3 downto 0))); -- sub
					when "0011" => akku(7 downto 0) <= akku(7 downto 0) or ("0000" & indata(3 downto 0)); -- or
					when "0100" => akku(7 downto 0) <= akku(7 downto 0) xor("0000" & indata(3 downto 0)); -- xor
					when "0101" => akku(7 downto 0) <= akku(7 downto 0) and ("0000" & indata(3 downto 0)); -- and
					when "0110" => akku <= not ("0000" & indata(3 downto 0)); -- not
					when "0111" =>                           -- brz
						if(indata(3) = '0') then   
							pc <= indata(2 downto 0);
							states <= "0000";
						end if;
						
					when "1000" =>                           -- brzn
						if(indata(3) /= '0') then
							pc <= indata(2 downto 0);
							states <= "0000";
						end if;
						
					when "1001" => akku <= "0" & memory(to_integer(unsigned(indata(2 downto 0))));		-- load
					when "1010" =>  memory(to_integer(unsigned(indata(2 downto 0)))) <= akku(7 downto 0); --store
					
					when "1011" =>                         -- ror
						akku(6 downto 0) <= "0000" & indata(3 downto 1);
						akku(7) <= indata(0);
						
					when "1100" => 								-- rol
						akku(7 downto 1) <= "0000" & indata(2 downto 0);
						akku(0) <= indata(3);
						
					when "1101" => 								-- shr
						akku(6 downto 0) <= "0000" & indata(3 downto 1);
						akku(7) <= '0';
						
					when "1110" => 								-- shl
						akku(7 downto 1) <= "0000" & indata(2 downto 0);
						akku(0) <= '0';
						
					when "1111" =>
						states <= "0000";
						hlt <= '1';
					when others => null; 
				end Case;
				-- State machine
				If (states /= "0000") then states <= "0000"; -- fetch next opcode
				else states <= indata(7 downto 4); -- execute instruction
				end If;
			end If;
	end Process;
	-- output
	data <= akku(7 downto 0);
	adress <= adreg;
	carry <= akku(8);
end CPU_ARCH;