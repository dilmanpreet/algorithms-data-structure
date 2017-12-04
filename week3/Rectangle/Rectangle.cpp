#include "Rectangle.h"

Rectangle:: Rectangle(){
   width = 1;
   height = 1;
}

Rectangle:: Rectangle(double aWidth, double aHeight){
   width = aWidth;
   height = aHeight;
}

double Rectangle:: getWidth(){
   return width;
}

double Rectangle:: getHeight(){
   return height;
}

void Rectangle:: setWidth(double aWidth){
   width = aWidth;
}

void Rectangle:: setHeight(double aHeight){
   height = aHeight;
}


double Rectangle:: getArea(){
   return width*height;
}

double Rectangle:: getPerimeter(){
   return 2*(width+height);
}
   