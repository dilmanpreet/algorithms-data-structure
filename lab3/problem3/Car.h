#ifndef CAR_H
#define CAR_H

class Car{
    
    	//All the private methods are created here
private:
    int yearModel; 
    string make;
    bool on;
    int speed;
    double mileage;
    long beginTime;
    long endTime;
    
    	//All the public methods are created here
public:

	Car();	//default constructor
	//A constructor that creates a car with a given year model and a make name. The constructor initializes the speed to be 0.
	Car(int YearModel, string Make);	

	//The accessor fuctions for yearModel, make, on, speed, and mileage are created below

int getYearModel();
string getMake();
bool GetOn();
int getSpeed();
double getMileage();

   void start();
   void stop();
   void updateMileage();
   void accelerate();
   void  brake();



};
#endif