// Author : Dilmanpreet nandu
// date: 8 october 2017
#include <iostream>
#include <string>
using namespace std;
#include "Room.h"

//A no-arg constructor to creates a default a default Room with 1/1 Room
Room::Room()
{
    RoomType= "Single";
	 RooomNumber=" ";
	 roomPrice= 100.00;
    available=true;
}
//constructor with the values 
Room::Room(string Roomno, double rate, string Roomtyp){
   RoomType= Roomtyp;
	 RooomNumber= Roomno;
	 roomPrice= rate;
    available= true;
}


// member function that sets the room number  
void Room::setRoomNumber(string Roomno) {
	RooomNumber = Roomno;
}
// member function that sets the rate of the room  
void Room::setRoomPrice(double rate) {
	roomPrice = rate;
}

// member function that sets the type of the room 
void Room::setRoomType(string Roomtyp) {
	RoomType = Roomtyp;
}

// member function that sets the availability of room
void Room::setRoomAvailability(bool avail) {
	available = avail;
}

// member function that gives the room number of the room
 string Room::getRoomNumber() {
	return RooomNumber;
}

// member function that returns the price of the room
double Room::getRoomPrice() {
	return roomPrice;
}

///member function that  returns the type of the room
string Room::getRoomType() {
	return RoomType;
}

// member function that retuns the availability of the room
bool Room::getRoomAvailability() {
	return available;
}