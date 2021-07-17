LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
  
ENTITY moore_test IS
END moore_test;
 
ARCHITECTURE behavior OF moore_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT moore_sequence_detector
    PORT(
         A : IN  std_logic;
         Clk : IN  std_logic;
         B : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal Clk : std_logic := '0';

 	--Outputs
   signal B : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: moore_sequence_detector PORT MAP (
          A => A,
          Clk => Clk,
          B => B
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		A <= '0';
      wait for 100 ns;	
		A <= '1';
      wait for Clk_period*10;
		A <= '0';
      wait for Clk_period;
		A <= '1';
      wait for Clk_period*2;
		A <= '0';
      wait for Clk_period*4;
		A <= '1';
      wait for Clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
