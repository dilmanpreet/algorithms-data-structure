#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <math.h>
using namespace std;
class Complex{
	
public:
	//the three constructors
	Complex();	
	Complex(double a);
	Complex(double a, double b);
	Complex add(const Complex& imgPartRational) const;
	Complex subtract(const Complex& imgPart) const;
	Complex multiply(const Complex& imgPart)const;
	Complex divide(const Complex& imgPart)const;
	Complex abs();
	double getRealPart() const;
	double getImaginaryPart() const;
	string toString();
	double operator[](int num);

	Complex& operator+=(const Complex& realPart);
	Complex& operator-=(const Complex& realPart);
	Complex& operator*=(const Complex& realPart);
	Complex& operator/=(const Complex& realPart);

	Complex& operator+();
	Complex& operator++();
	Complex& operator--();
	Complex operator++(int waste);
	Complex operator--(int waste);
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
	
	
	//All private variables are declaired here
private:
	double a;
	double b;


};
//we dont need to call them inside complex class
Complex operator+(const Complex& realPart, const Complex& imgPart);
Complex operator-(const Complex& realPart, const Complex& imgPart);
Complex operator*(const Complex& realPart, const Complex& imgPart);
Complex operator/(const Complex& realPart, const Complex& imgPart);
#endif
