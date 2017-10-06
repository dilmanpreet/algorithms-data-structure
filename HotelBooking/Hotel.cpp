// Author : Dilmanpreet nandu
// Student ID: 100271865

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
Hotel::Hotel(string hotelName) {
	hName = hotelName;
	numberAvailable = 0;
}

// This function sets the name of the hotel as given string
 
void Hotel::setHotelName(string hotelName) {
	hName = hotelName;
}

//member function that returns the name of the hotel
 
string Hotel::getHotelName() {
	return hName;
}
//member function that  finds the available room in the given hotel
Room Hotel::findAvailableRoom(string roomType) {
	Room rooms;
	for (int i = 0; i < numberAvailable; i++) {
		if (roomarray[i].getType() == roomType && roomarray[i].getAvailability() == "empty") { 
			roomarray[i].setAvailability("occupied");
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


 
