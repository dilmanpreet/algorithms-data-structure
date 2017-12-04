#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
   Rectangle rectangle1;
   Rectangle rectangle2(4,40);
   
   cout << "Width of Rectangle: " << rectangle1.getWidth() << " Height of Rectangle: " << rectangle1.getHeight() << " Area of Rectangle: " << rectangle1.getArea() << " Perimeter of Rectangle: " << rectangle1.getPerimeter() << endl;
   cout << "Width of Rectangle: " << rectangle2.getWidth() <<  " Height of Rectangle: " << rectangle2.getHeight() << " Area of Rectangle: " << rectangle2.getArea() << " Perimeter of Rectangle: " << rectangle2.getPerimeter() << endl;
   system("pause");
   return 0;
}