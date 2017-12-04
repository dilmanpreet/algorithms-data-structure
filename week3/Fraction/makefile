TestFraction: TestFraction.o Fraction.o
	g++ TestFraction.o Fraction.o -o TestFraction
TestFraction.o: TestFraction.cpp Fraction.h
	g++ -c TestFraction.cpp
Fraction.o : Fraction.cpp Fraction.h
	g++ -c Fraction.cpp