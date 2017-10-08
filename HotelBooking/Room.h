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
   bool available;
	

	//All the public methods are created here
public:
	
	Room();	//default constructor
	
	Room(string Roomno, double rate, string Roomtyp);


//mutator functions

   void setRoomNumber(string Roomno);
	void setRoomPrice(double rate);
	void setRoomType(string Roomtyp);
	void setRoomAvailability(bool avail);

	string getRoomNumber();
	double getRoomPrice();
	string getRoomType();
	bool getRoomAvailability();
	
};
#endif
