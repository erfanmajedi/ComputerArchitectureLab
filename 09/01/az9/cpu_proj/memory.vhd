
      use ieee.std_logic_1164.all;
		use ieee.math_real.all;
		use ieee.Numeric_Std.all;
		use ieee.std_logic_unsigned.all;
  
  entity RAM is
      generic (
          W :integer := 32;   -- data width or data size
			 C :integer := 8   -- addr width
      );
      port (
          clk     :in    std_logic;                                -- Clock Input
          address :in    std_logic_vector (C-1 downto 0); -- address Input 3 bit
          data    :inout std_logic_vector (W-1 downto 0); -- data bi-directional
          WR      :in    std_logic;                                -- Write Enable
			 RD      :in    std_logic;                                -- Read Enable 
          reset   :in    std_logic                                 
  
      );
  end entity;
  architecture rtl of RAM is
     ----------------Internal variables----------------  
      signal data_out :std_logic_vector (W-1 downto 0);
		constant D :integer := 2**C;    -- ram depth or ram size   size bolck * num block

  
      type RAM is array (integer range <>)of std_logic_vector (W-1 downto 0);
      signal mem : RAM (D-1 downto 0):= (others=>(others=>'0'));
  begin
  
     ----------------Code Starts Here------------------
     -- Tri-State Buffer control
     -- output :
       data <= data_out when (reset = '1' and rd = '1') else (others=>'Z');
	  
	 
	process (clk,reset) 
	begin
	
  	--  RESET_state:
	  if(reset = '0') then
		for i in 0 to C-1 loop
			mem(i) <= std_logic_vector(to_unsigned(i, w)) ;
		end loop;
	  end if;

     -- Memory Write Block
     -- Write Operation : When wr = 1, reset = 1

          if (rising_edge(clk)) then
              if (reset = '1' and WR = '1') then
                  mem(conv_integer(address)) <= data;
              end if;
				  end if;
			
  
     -- Memory Read Block
     -- Read Operation : When rd = 1, reset = 1
	  	
			if (rising_edge(clk)) then
              if (reset = '1' and RD = '1') then
                   data_out <= mem(conv_integer(address));
              end if;
				  end if;
      
		end process;
  end architecture;