library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
	Port ( IR : in  STD_LOGIC_VECTOR (15 downto 0);
			 CLK : in  STD_LOGIC;
			 controls : out  STD_LOGIC_VECTOR(21 downto 0)); 
end control_unit;

architecture Behavioral of control_unit is

	component decoder4_16 is 
	Port (input : in  STD_LOGIC_vector(3 downto 0);
         output : out  STD_LOGIC_vector(15 downto 0));
	end component;
	
	component decoder3_8 is 
	Port (input : in  STD_LOGIC_vector(2 downto 0);
         output : out  STD_LOGIC_vector(7 downto 0));
	end component;
	
	component sequence_counter is 
	Port (CLK : in  STD_LOGIC;
			CLR : in  STD_LOGIC;
         output : out  STD_LOGIC_VECTOR(3 downto 0));
	end component;
	
	
	signal D : STD_LOGIC_VECTOR (7 downto 0);  -- decodes opcode
	signal T : STD_LOGIC_VECTOR (15 downto 0); -- decodes time
	signal SC : STD_LOGIC_VECTOR (3 downto 0); -- it counts
	signal CLR: STD_LOGIC := '1';


begin

	seq_counter : sequence_counter port map (CLK, CLR, SC);
	time_decoder : decoder4_16 port map (SC, T);
	opcode_decoder : decoder3_8  port map (IR(14 downto 12), D);
	
	process (D , T)
	begin
		controls <= (others => '0');
		CLR <= '0';
		-- from T(0) to T(3) is for fetch and decode, since T(4) execution starts:
		if ((D(0) and T(4)) = '1') then    -- 	and
			controls(21 downto 19) <= "111"; -- selects memory to be on bus
			controls(17) <= '1'; -- LD AC
			controls(10) <= '1'; -- memory read
		elsif ((D(0) and T(5)) = '1') then  -- and.
			controls(7) <= '1'; -- CLR AC
			CLR <= '1';
		elsif ((D(1) and T(4)) = '1') then -- add
			controls(21 downto 19) <= "111"; -- selects memory to be on bus
			controls(17) <= '1'; -- LD AC
			controls(10) <= '1'; -- memory read
		elsif ((D(1) and T(5)) = '1') then -- add.
			controls(7) <= '1'; -- CLR AC
			CLR <= '1';
		elsif ((D(2) and T(4)) = '1') then -- LDA
			controls(21 downto 19) <= "111"; -- selects memory to be on bus
			controls(17) <= '1'; -- LD AC
			controls(10) <= '1'; -- memory read
		elsif ((D(2) and T(5)) = '1') then -- LDA.
			controls(21 downto 19) <= "011"; -- selects DR to be on bus
			controls(7) <= '1'; -- CLR AC
			CLR <= '1';
		elsif ((D(3) and T(4)) = '1') then -- STA
			controls(21 downto 19) <= "100"; -- selects AC to be on bus
			controls(18) <= '1'; -- memory write
			CLR <= '1';
		elsif ((D(4) and T(4)) = '1') then -- BUN
			controls(21 downto 19) <= "001"; -- selects AR to be on bus
			controls(13) <= '1'; -- LD PC
			CLR <= '1';
		else null;
		end if;
	end process ;
end Behavioral;
