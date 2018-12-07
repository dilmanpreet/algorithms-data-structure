// Author : Dilmanpreet nandu
// date: 16 November 2018


#include<iostream>
#include<cstdlib>
#include <iomanip> 
#include <string>
#include<math.h>
#include"Complex.h"

using namespace std;

int main()
{  	
	
	Complex userIn;
	cin >> userIn;
	
	cout<<"The Complex number one made  by user is "<<userIn<<endl;
	
	cout << "The real part of UserInput which we get by using [] is: " << userIn[0] << endl;
	cout << "The imaginary part of UserInput which we get by using [] is: " << userIn[1] << endl;
	cout << endl;
	
	cout<<"For testing purpose i will take some new Complex number from you say num1"<<endl;
	Complex Num1;
	cin >> Num1;
	
	cout<<"And we have the userinput  one" <<userIn<<endl;
	cout << "a + bi + c + di = (a + c) + (b + d)i"<<endl;
	cout << Num1 << " + " << userIn << " = " << (Num1 + userIn)<< endl;
	cout << endl;
	cout << "a + bi - (c + di) = (a - c) + (b - d)i"<<endl;
	cout << Num1 << " - " << userIn<< " = " << (Num1 - userIn) << endl;
	cout << endl;
	cout << "(a + bi) * (c + di) = (ac - bd) + (bc + ad)i"<<endl;
	cout << Num1 << " * " << userIn << " = " << (Num1 * userIn) << endl;
	cout << endl;
	cout <<"(a + bi) / (c + di) = (ac + bd) /  (c2 + d2) + (ac - bd)i /  (c2 + d2)" <<endl;
	cout << Num1 << " / " << userIn << " = " << (Num1 / userIn) << endl;
	cout << endl;
	cout << " The absolute value of the number"<< userIn<<" = " << (  userIn.abs()[0]) << endl;
	cout << endl;
	
	
	Complex test( 1, 1);
	test = Num1++;
	
	cout << "Lets take a new complex number test (1,1) on using test = Num1++, ";
	cout << "test will be " << test << endl;
	test = Num1--;
	cout << "on using test = Num1--, ";
	cout << "test will be " << test << endl;
	
	cout << "on using test = ++Num1, ";
	cout << "Test will be " << test << endl;
	
	cout << endl;
	cout << endl;
	Complex Num2(6 , 8);
	Complex Num3(4,5);
	cout<<"Lets take some new numbers now Num2 (6, 8) and num3 (4,5) "<<endl;
	Num3 += Num2;
	cout << endl;
	cout << "On implementing += between Num3 and Num2 answer is:" << Num3 << endl;
	Num3 -= Num2;
	cout << endl;
	cout << "Further implementing -= between Num3 and Num2 answer is:" << Num3 << endl;
	Num3 *= Num2;
	cout << endl;
	cout << "On implementing *= between Num3 and Num2  answer is:" << Num3 << endl;
	Num3 /= Num2;
	cout << endl;
	cout << "And On implementing /= between Num3 and Num2 final answer is:" << Num3 << endl;
	cout << endl;
	
	
	return 0;
}