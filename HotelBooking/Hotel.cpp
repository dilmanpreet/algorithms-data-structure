// Author : Dilmanpreet nandu
// date: 8 october 2017

#include <iostream>
#include <string>
#include <cstdlib> 
#include "Hotel.h"
#include "Room.h"

using namespace std;

//A no-arg constructor to creates a default Hotel with rooms
Hotel::Hotel() {
	hName = " ";
	numberAvailable = 0;
}

//This Constructor initialises a Hotel object with the given name.  
Hotel::Hotel(string Name) {
	hName = Name;
	numberAvailable = 0;
}

// This function sets the name of the hotel as given string
 
void Hotel::setHotelName(string Name) {
	hName = Name;
}

//member function that returns the name of the hotel
 
string Hotel::getHotel() const {
	return hName;
}


//member function that returns the num of rooms of hotel
 
int Hotel::getNumOfRooms() const {
	return numberAvailable;
}
//member function that  finds the available room in the given hotel
Room Hotel::findAvailableRoom(string roomType) {
	Room rooms;
	for (int i = 0; i < numberAvailable; i++) {
		if (roomarray[i].getRoomType() == roomType && roomarray[i].getRoomAvailability() ==true) { 
			roomarray[i].setRoomAvailability(false);
			return roomarray[i]; }
	}
	return rooms;
}
//member function that add room to the given hotel
void Hotel::addRoom(Room rooms) {
	if (numberAvailable <= MAX_ROOMS) {
		roomarray[numberAvailable] = rooms;
		numberAvailable++;
	}
}


 
