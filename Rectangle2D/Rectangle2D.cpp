// Author : Dilmanpreet nandu
// date: 11 october 2017
 
#include <iostream>
#include <string>

#include "Rectangle2D.h"

using namespace std;

//This is an empty constructor 

Rectangle2D::Rectangle2D(){
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

//constructor with the values 
Rectangle2D::Rectangle2D(double xx, double yy, double ww, double hh){
	x = xx;
	y = yy;
	width = ww;
	height = hh;
}
//member functions that returns the value of x, y, height, width
double Rectangle2D::getX(){
	return x;
	}
double Rectangle2D::getY(){
	return y;
	}
double Rectangle2D::getWidth(){
	return width;
	}
double Rectangle2D::getHeight(){
	return height;
	}
//member function that returns the value of area
double Rectangle2D::getArea(){
	return (width*height);
	}
	
//member function that returns the value of perimeter
double Rectangle2D::getPerimeter(){
	return (2*(height+width));
	}
	
//member functions that changes the value of x, y, height, width
void Rectangle2D::setX(double xx){
	x=xx;
	}
void Rectangle2D::setY(double yy){
	y=yy;
	}
void Rectangle2D::setWidth(double ww){
	width=ww;
	}
void Rectangle2D::setHeight(double hh){
	height=hh;
	}
	
//member function that is used to check if the input coordinates is inside the rectangle 
bool Rectangle2D::contains(double xxx, double yyy) const{
	if (xxx>(x-width/2) && xxx<(x + width/2) &&
		yyy>(y-height/2) && yyy<(y+height/2) ) {
		return true;
	}
	else
		return false;
}

//member function that is used to check if the input rectangle is inside the rectangle 
bool Rectangle2D::contains(const Rectangle2D &r)const{
	if (contains(r.x -r.width / 2, r.y + height / 2) &&
	     contains(r.x +r.width / 2, r.y - height / 2)){
		return true;
	}
	else
		return false;

	}
//member function that is used to check if the input is overlapping the rectangle 
bool Rectangle2D::overlaps(const Rectangle2D &r)const{
	
	// height overlap
	if (y + height / 2 < r.y - height / 2 || r.y + height / 2 < y - height / 2) 
		return false;
	
	//width overlap
	if (x - width / 2 > r.x + width / 2 || r.x - width / 2 > x + width / 2) 
		return false;
	
	
		return true;
}