// Author : Dilmanpreet nandu
// Student ID: 100271865

#include<iostream>
#include<iomanip>
#include<cstdlib> 
#include"Fraction.h"
using namespace std;



int main()
{
	int a=50, b=100,c=25,d=125,e=2,f=3;	
   
   ///test program that creates a Fraction object 
		Fraction TestFractionEg1(a, b);
		Fraction TestFractionEg2(c, d);
		Fraction TestFractionEg3(e, f);
   //Display the outputs for the examples 
		cout << "The fraction for "<<a<< "/" <<b <<" in its lowest terms is " << TestFractionEg1.getFraction() << endl;
		cout << "The fraction for "<<c<< "/" <<d <<" in its lowest terms is " << TestFractionEg2.getFraction() << endl;
		cout << "The fraction for "<<e<< "/" <<f <<" in its lowest terms is " << TestFractionEg3.getFraction() << endl;
		return 0;
}