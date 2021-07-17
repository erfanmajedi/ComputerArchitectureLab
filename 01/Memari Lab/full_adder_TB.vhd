

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY full_adder_tb IS
END full_adder_tb;
 
ARCHITECTURE behavior OF full_adder_tb IS 
 
 
    COMPONENT full_adder
    PORT(
         i0 : IN  std_logic;
         i1 : IN  std_logic;
         cin : IN  std_logic;
         s : OUT  std_logic;
         cout : OUT  std_logic
        );
    END COMPONENT;
    


   signal i0 : std_logic := '0';
   signal i1 : std_logic := '0';
   signal cin : std_logic := '0';

 
   signal s : std_logic;
   signal cout : std_logic;

 
 
BEGIN

   uut: full_adder PORT MAP (
          i0 => i0,
          i1 => i1,
          cin => cin,
          s => s,
          cout => cout
        );
i0 <= '0', '1' after 100 ns,'0' after 200 ns,'1' after 300 ns;
i1 <= '1','0' after 50 ns,'1' after 100 ns, '0' after 150 ns,'1' after 250 ns;
cin <='1','0' after 100 ns,'1' after 150 ns,'0' after 250 ns,'1' after 350 ns;

end behavior;