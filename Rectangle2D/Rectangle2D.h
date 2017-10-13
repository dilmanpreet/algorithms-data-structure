#ifndef RECTANGLE2D_H 
#define RECTANGLE2D_H 

#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;


class Rectangle2D
{
	//All the private methods are created here
private:
double x, y;
double height, width;

	//All the public methods are created here
public:
	
   Rectangle2D();
   Rectangle2D(double xx, double yy, double ww, double hh);
	
//mutator functions and accesors
   
double getX();
double getY();
double getWidth();
double getHeight();
double getArea();
double getPerimeter();
bool contains(double xxx, double yyy) const;
bool contains(const Rectangle2D &r)const;
bool overlaps(const Rectangle2D &r)const;

void setX(double xx);
void setY(double yy);
void setWidth(double ww);
void setHeight(double hh);
};
#endif