LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
  
ENTITY tff_test IS
END tff_test;
 
ARCHITECTURE behavior OF tff_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT tff
    PORT(
         T : IN  std_logic;
         Clk : IN  std_logic;
         Reset : IN  std_logic;
         Q : OUT  std_logic;
         Qnot : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal T : std_logic := '0';
   signal Clk : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal Q : std_logic;
   signal Qnot : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: tff PORT MAP (
          T => T,
          Clk => Clk,
          Reset => Reset,
          Q => Q,
          Qnot => Qnot
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
     Reset <= '0';
      wait for 100 ns;	
		T <= '1';
      Reset <= '1';
      wait for Clk_period*2;
		T <= '0';
      wait for Clk_period*4;
		T <= '1';
      wait;
   end process;

END;
