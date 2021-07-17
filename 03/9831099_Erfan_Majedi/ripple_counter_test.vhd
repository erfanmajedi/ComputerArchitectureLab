LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY ripple_counter_test IS
END ripple_counter_test;
 
ARCHITECTURE behavior OF ripple_counter_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ripple_counter
    PORT(
         T : IN  std_logic;
         Clk : IN  std_logic;
         Reset : IN  std_logic;
         Q : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal T : std_logic := '0';
   signal Clk : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ripple_counter PORT MAP (
          T => T,
          Clk => Clk,
          Reset => Reset,
          Q => Q
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
		Reset <= '1';
		T <= '1';
      wait for Clk_period*15;
		T <= '0';
      wait for Clk_period*10;
		T <= '1';
      wait;
   end process;

END;
