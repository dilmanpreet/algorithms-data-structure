// Author : Dilmanpreet nandu
// date: 11 october 2017

#include <iostream>
#include <string>
#include "Rectangle2D.h"

using namespace std;
string insideOrNot(bool x);
string overlapOrNot(bool x);
int main()
{

///test program that creates a the rectangles  
Rectangle2D r1(2, 5, 5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	
	
	bool a= r1.contains(3, 3);
	bool b= r1.contains(r2);
	bool c= r1.overlaps(r3);
	
   //Display the outputs for the examples 
		cout << "Area of Rectangle A is:  "<< r1.getArea() <<endl;
	
		cout << "Perimeter of Rectangle A is:  "<< r1.getPerimeter() <<endl;
	
		cout << " The point 3,3 is "<< insideOrNot(a)<< " rectange A"<<endl;
		
		cout << " The rectange b "<<insideOrNot(b)<< " rectangle A"<<endl;
	
		cout << " The rectange c "<< overlapOrNot(c)<< " rectange A"<<endl;
    
      return 0;
}

string insideOrNot(bool x){
	if (x==true)
		return "inside";
	else
		return "outside";
	
	}

string overlapOrNot(bool x){
	if (x==true)
		return "overlaps";
	else
		return "does not overlaps";
	
	}
