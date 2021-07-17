library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
 
entity CSMult is
Port ( 	A : in STD_LOGIC_VECTOR (3 downto 0);
	B : in STD_LOGIC_VECTOR (3 downto 0);
	P : out STD_LOGIC_VECTOR (7 downto 0));
end CSMult;
 
architecture Behavioral of CSMult is

component HA is
Port ( 	A : in  STD_LOGIC;
	B : in  STD_LOGIC;
        S : out  STD_LOGIC;
	C : out  STD_LOGIC);
end component; 


component FA is
Port (  A : in STD_LOGIC;
	B : in STD_LOGIC;
	Cin : in STD_LOGIC;
	S : out STD_LOGIC;
	Cout : out STD_LOGIC);
end component;

signal c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36: STD_LOGIC;

begin

c1 <= A(0) and B(1);
c2 <= A(1) and B(0);

c4 <= A(0) and B(2);
c5 <= A(1) and B(1);

c8 <= A(0) and B(3);
c9 <= A(1) and B(2);

--
c12 <= A(2) and B(0);

c15 <= A(2) and B(1);

c17 <= A(2) and B(2);

c20 <= A(1) and B(3);

--
c23 <= A(3) and B(0);

c26 <= A(3) and B(1);

c28 <= A(3) and B(2);

c30 <= A(2) and B(3);
--

c32 <= A(3) and B(3);

 
 -- Port Mapping Levevl 1
P(0) <= A(0) and B(0);
HA1: HA port map(c1, c2, P(1), c3);
HA2: HA port map(c4, c5, c6, c7);
HA3: HA port map(c8, c9, c10, c11);

-- Port Mapping Levevl 2
FA4: FA port map(c12, c3, c6, P(2), c18);
FA5: FA port map(c15, c7, c10, c21, c22);
FA6: FA port map(c17, c11, c20, c24, c25);

-- Port Mapping Levevl 3
FA7: FA port map(c23, c18, c21, P(3), c29);
FA8: FA port map(c26, c22, c24, c27, c31);
FA9: FA port map(c28, c25, c30, c33, c34);

-- Port Mapping Levevl 4
HA10: HA port map(c29, c27, P(4), c35);
FA11: FA port map(c35, c31, c33, P(5), c36);
FA12: FA port map(c34, c32, c36, P(6), P(7));
 
end Behavioral;

