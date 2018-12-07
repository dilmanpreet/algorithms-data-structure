#include "Car.h"
#include <time.h>
#include <windows.h>

//A no-arg constructor to creates a default car
Car::Car()
{
								
	 yearModel=0; 
    make="";
    on=false;
    speed=0;
    mileage=0;
    beginTime=0;
    endTime=0;				
}

Car::Car( YearModel, Make)
{
								
	 yearModel=YearModel; 
    make=Make;
    on=false;
    speed=0;
    mileage=0;
    beginTime=0;
    endTime=0;				
}

//accessors
int Car::int getYearModel(){ 
    return yearModel;
}
string Car:: getMake(){
    return make;
    
}
bool Car:: GetOn(){ 
    return on;
    
}
int Car:: getSpeed(){ 
    return speed;
}
double Car:: getMileage(){ 
    return mileage;
}

   void Car:: start(){ 
        on=true;
        speed=40;
       
   }
   void Car:: stop(){
       on=false;
       speed=0;
   }
   void Car:: updateMileage(){ }
   void Car:: accelerate(){ }
   void Car::  brake(){ }