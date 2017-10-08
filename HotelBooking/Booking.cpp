// Author : Dilmanpreet nandu
// date: 8 october 2017
 
#include <iostream>
#include <string>

#include "Booking.h"
#include "Hotel.h"
#include "Room.h"
#include "Customer.h"
using namespace std;

int Booking:: bookingSeqN=10000;


//constructor with the values 
Booking::Booking(Hotel& h, string roomType, Customer x)
{
   bookingSeqN++;
   bookingId = bookingSeqN;  
	hotel = h;
	roomT = roomType;
	room = hotel.findAvailableRoom(roomT);
	customers = x;
	
}

//member function that returns the value of the Booking id
int Booking::getBooking() 
{
	return bookingId;
}
//member function that returns the value of the roomtype
string Booking::getRoomType() 
{
	return roomT;
	};

//member function that returns the value of the hotel we are booking
Hotel Booking::getHotel()  {
	return hotel;
}

//member function that returns the value of the customer we are booking for
Customer Booking::getCustomer() {
	return customers;
}

//member function that returns the value of the room we are booking for
Room Booking::getRoom() {
	return room;
}
//member function changes the room to other customer
//void Booking::setCustomer(Customer x) {
//	customer = x;
//}


//member function changes the room to other customer
void Booking::setRoomType(string roomType) {
	roomT = roomType;
}

