#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle{
   private:
      //paramters
      double width;
      double height;
   
   public:   
      //Default Constructor
      Rectangle();
      //constructor with specified arguements
      Rectangle(double aWidth, double aHeight);
      
      //Accessors
      double getWidth();
      double getHeight();
      double getArea();
      double getPerimeter();
      void setWidth(double aWidth);
      void setHeight(double aHeight);
};
#endif