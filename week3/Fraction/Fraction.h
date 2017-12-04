

#include<iostream>
#include<string>
#include<cstdlib> 
#define FRACTION_H


using namespace std;


class Fraction
{
	//All the private methods are created here
private:
	int numerator;
	int denominator;
	int getGreatComDiv();	//private function that returns the greatest common divisor of two integers



	//All the public methods are created here
public:
	
	Fraction();	//default constructor
	
	Fraction(int numerator, int denominator);//A constructor with data field int numerator and data field int denominator
	
//mutator functions that allow the user to set the numerator and the denominator are below
	void setNumerator(int num);
	void setDenominator(int den);
string getFraction();//function to reduce to lowest form of fraction

};
