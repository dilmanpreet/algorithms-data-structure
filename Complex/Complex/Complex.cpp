// Author : Dilmanpreet nandu
// date: 18 November 2017

#include"Complex.h"
#include<iostream>
#include <iomanip> 
#include<cstdlib>
#include<math.h>

using namespace std;
//  empty constructor  Complex()
Complex::Complex(){
	a = 0;
	b = 0;
}
// constructor Complex(a)
Complex::Complex(double realPart) {
	a = realPart;
	b = 0;
}
//constructor with parameters Complex(a, b)
Complex::Complex(double realPart, double imgPart){
	a = realPart;
	b = imgPart;
}
//functions for returning the real part of the complex number
double Complex::getRealPart()const{
	return a;
}
//functions for returning the imaginary part of the complex number
double Complex::getImaginaryPart() const{
	return b;
}

//functions for addition, subtraction, multiplication, and division for complex numbers are below
Complex Complex::add(const Complex& imgPartComplex) const
{
	double R = a + imgPartComplex.getRealPart();
	double I = b + imgPartComplex.getImaginaryPart();
	return Complex(R, I);
}
Complex Complex::subtract(const Complex& imgPartComplex) const
{
	double R = a - imgPartComplex.getRealPart();
	double I = b - imgPartComplex.getImaginaryPart();
	return Complex(R, I);
}
Complex Complex::multiply(const Complex& imgPartComplex)const
{
	double R = a*imgPartComplex.getRealPart() - (b*imgPartComplex.getImaginaryPart());
	double I = ((a*imgPartComplex.getImaginaryPart()) + (b*imgPartComplex.getRealPart()));
	return Complex(R, I);
}
Complex Complex::divide(const Complex& imgPartComplex)const
{
	double R = ((a*imgPartComplex.getRealPart()) + (b*imgPartComplex.getImaginaryPart())) /
		((imgPartComplex.getRealPart()*imgPartComplex.getRealPart()) + (imgPartComplex.getImaginaryPart()*imgPartComplex.getImaginaryPart()));
	double I = ((b*imgPartComplex.getRealPart()) - (a*imgPartComplex.getImaginaryPart())) /
		((imgPartComplex.getRealPart()*imgPartComplex.getRealPart()) + (imgPartComplex.getImaginaryPart()*imgPartComplex.getImaginaryPart()));
	
	
	return Complex(R, I) ;
}
//function to obtain the absolute value for a complex number 
Complex Complex::abs(){
	double num = (pow(a,2)) +(pow(b,2));
	return pow(num,0.5);
	
}

//returning a string representation for a complex number
string Complex::toString(){
	if (b == 0)
	{
      string str = to_string(a);
		return str;
	}
	else if (b<0)
	{
		string newstr = "";
		newstr+="( ";
		newstr+=getRealPart();
		newstr+=getImaginaryPart();
		newstr+="i";
		newstr+=") ";
		return newstr;
	}
	else
	{
		string newstr = "";
		newstr+="( ";
		newstr+=getRealPart();
		newstr+="+";
		newstr+=getImaginaryPart();
		newstr+="i";
		newstr+=") ";
		return newstr;
	}
}	
ostream & operator<<(ostream & out, const Complex& realPart)
{
	
	 if (realPart.b == 0)
	{
		out<< realPart.a;
	}

	if (realPart.b<0)
		{
			out << " (" <<realPart.a << realPart.b << "i" << " )";
		}
		else
		{
			out << " (" << realPart.a <<" + " << realPart.b << "i" <<" )";
		}
	return out;
}
istream & operator>>(istream & in, Complex &realPart)
{
	cout << "Enter the real part:" << endl;
	in >> realPart.a;
	cout << "Enter the Imaginary part:" << endl;
	in >> realPart.b;

	return in;
}
//Here are the sign operators
Complex operator+(const Complex& realPart, const Complex& imgPart){
	return realPart.add(imgPart);
}
Complex operator-(const Complex& realPart, const Complex& imgPart){
	return realPart.subtract(imgPart);
}
Complex operator*(const Complex& realPart, const Complex& imgPart){
	return realPart.multiply(imgPart);
}
Complex operator/(const Complex& realPart, const Complex& imgPart){
	return realPart.divide(imgPart);
}
//Overload [] so that [0] returns a and [1] returns b
double Complex::operator[](int num)
{
	if (num == 0)
		return a;
	else
		return b;
}
//Here are the = operators
Complex & Complex::operator+=(const Complex & realPart)
{
	*this = add(realPart);
	return *this;
}

Complex & Complex::operator-=(const Complex & realPart)
{
	*this = subtract(realPart);
	return *this;
}

Complex & Complex::operator*=(const Complex & realPart)
{
	*this = multiply(realPart);
	return *this;
}

Complex & Complex::operator/=(const Complex & realPart)
{
	*this = divide(realPart);
	return *this;
}

Complex & Complex::operator+()
{
	return *this;
}



Complex & Complex::operator++()
{
	a++;
	return *this;
}

Complex & Complex::operator--()
{
	a--;
	return *this;
}
Complex Complex::operator++(int waste)
{
	Complex temp(a, b);
	a++;
	return temp;
}
Complex Complex::operator--(int waste)
{
	Complex temp(a, b);
	a--;
	return temp;
}