
#ifndef HOTEL_H
#define HOTEL_H  


#include <string>
#include <iostream>
 


using namespace std;
const int MAX_ROOMS=100;

class Hotel
{
	//All the private methods are created here
private:
	string name;
	int numberAvailable;
	Room roomarray[MAX_ROOMS];


	//All the public methods are created here
public:
	Hotel();
   Hotel(string hotelName);

string getHotelName();
Room findAvailableRoom(string roomType);
void setHotelName(string hotelName);
void addRoom(Room rooms);
	
};
#endif
