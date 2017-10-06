#ifndef ROOM_H 
#define ROOM_H

#include <iostream>
#include <string>



using namespace std;


class Room
{
	//All the private methods are created here
private:
	string RoomType;
	string RooomNumber;
	double roomPrice;
   string available;


	//All the public methods are created here
public:
	
	Room();	//default constructor
	
	Room(string Roomno, double rate, string Roomtyp, string avail);


//mutator functions

   void setRoomNumber(string Roomno);
	void setRoomPrice(double rate);
	void setRoomType(string Roomtyp);
	void setRooomAvailability(string avail);

	string getRoomNumber();
	double getRoomPrice();
	string getRoomType();
	string getRoomAvailability();
	
};
#endif
