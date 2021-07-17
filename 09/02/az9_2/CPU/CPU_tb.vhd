LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY testbench IS
END testbench;
 
ARCHITECTURE behavior OF testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control_unit
    PORT(
         IR : IN  std_logic_vector(15 downto 0);
         CLK : IN  std_logic;
         controls : OUT  std_logic_vector(21 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal IR : std_logic_vector(15 downto 0) := (others => '0');
   signal CLK : std_logic := '0';

 	--Outputs
   signal controls : std_logic_vector(21 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control_unit PORT MAP (
          IR => IR,
          CLK => CLK,
          controls => controls
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 
		
		IR <= "0001010101010100";
      wait for 100 ns;	
		
		IR <= "0011010101010100";
		wait for 100 ns;	
		
		IR <= "0010010101010100";
		wait for 100 ns;	
		
		IR <= "0100010101010100";

      wait;
   end process;

END;