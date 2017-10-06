// Author : Dilmanpreet nandu
// date: 4 october 2017
 
#include <iostream>
#include <string>

#include "Booking.h"
#include "Hotel.h"
#include "Room.h"
#include "Customer.h"
using namespace std;

int Booking:: bookingSeqN=12000;

//constructor with the values 
Booking::Booking(Hotel h, string roomType, Customer x)
{
   bookingSeqN++;
   bookingId = bookingSeqN;  
	hotel = h;
	roomT = roomType;
	room = hotel.findAvailableRoom(roomT);
	customer = x;
	
}

//member function that returns the value of the hotel we are booking
Hotel Booking::getHotel() const {
	return hotel;
}

//member function that returns the value of the customer we are booking for
Customer Booking::getCustomer() {
	return customer;
}

//member function that returns the value of the room we are booking for
Room Booking::getRoom() {
	return roomT;
}
//member function changes the room to other customer
void Booking::setCustomer(Customer x) {
	customer = x;
}
//member function that returns the value of the Booking id
string Booking::getBooking() 
{
	return bookingId;
}
