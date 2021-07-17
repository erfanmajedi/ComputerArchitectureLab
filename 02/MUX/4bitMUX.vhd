library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity 4bitMUX is
	Port(
	D0 : in std_logic_vector(3 downto 0);
	S0 : in std_logic_vector(1 downto 0);
	Y : out std_logic_vector(3 downto 0)
);
end 4bitMUX

architecture strcuture of 4bitMUX is
	component MUX is 
	Port( D1 : in 	STD_LOGIC;
	D2 : in STD_LOGIC;
		S : in STD_LOGIC;
		R : out STD_LOGIC
);
end component 4bitMUX;
signal temp0 , temp1 : std_logic;
begin 
	mux1 : 4bitMUX port map (D(0) => D0(0) , D(1) => D0(1) , D(2) =>D0(2) , D3(3) => D0(3) , S(0) =>S0(0) , S(1)=>S0(1) , R=>Y(0));
	mux1 : 4bitMUX port map (D(0) => D0(0) , D(1) => D0(1) , D(2) =>D0(2) , D3(3) => D0(3) , S(0) =>S0(0) , S(1)=>S0(1) , R=>Y(1));
	mux1 : 4bitMUX port map (D(0) => D0(0) , D(1) => D0(1) , D(2) =>D0(2) , D3(3) => D0(3) , S(0) =>S0(0) , S(1)=>S0(1) , R=>Y(2));
	mux1 : 4bitMUX port map (D(0) => D0(0) , D(1) => D0(1) , D(2) =>D0(2) , D3(3) => D0(3) , S(0) =>S0(0) , S(1)=>S0(1) , R=>Y(3));
end structure ; 
	