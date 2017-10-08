
#ifndef HOTEL_H
#define HOTEL_H  


#include <string>
#include <iostream>
 #include "Room.h"



using namespace std;
const int MAX_ROOMS=50;

class Hotel
{
	//All the private methods are created here
private:
	string hName;
	int numberAvailable;
	 Room roomarray[MAX_ROOMS];


	//All the public methods are created here
public:
	Hotel();
   Hotel(string Name);
void setHotelName(string Name);
string getHotel() const;
int getNumOfRooms() const;
Room findAvailableRoom(string roomType);

void addRoom(Room room);
	
};
#endif
