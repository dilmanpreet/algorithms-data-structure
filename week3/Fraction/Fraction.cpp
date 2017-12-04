// Author : Dilmanpreet nandu
// Student ID: 100271865

#include<iostream>
#include<sstream>
#include<cstdlib> 
#include "Fraction.h"
//A no-arg constructor to creates a default a default fraction with 1/1 fraction
Fraction::Fraction()
{
	numerator = 1;
	denominator = 1;
}
//constructor with the values 
Fraction::Fraction(int num, int den)
{
	numerator = num;
	denominator = den;
}

//the private function to get GCM which is used to reduce the fraction to lowest terms
int Fraction::getGreatComDiv()
{
	int temp = 0,GCM = 0;
	
	if (numerator < denominator)
		temp = numerator;
	else
		temp = denominator;
	
	
	for (int i = 1; i <= temp; i++)
	{
		if ((numerator%i == 0) && (denominator%i == 0))
			GCM = i;
	}
	return GCM;
}
//member function that returns the value of the fraction reduced to lowest terms as string eg 50/100 as 1/2
string Fraction::getFraction()
{
	int a = numerator / getGreatComDiv();
	int b = denominator / getGreatComDiv();
	
	
	stringstream sn;	//to convert the integer to a string
	stringstream sd;	//to convert the integer to a string
	sn << a;	//	To append integer to a string
	sd << b;	//	To append integer to a string
	string numer = " ";
	string denom = " ";
	numer = sn.str();
	denom = sd.str();
	
	return (numer + "/" + denom);
}