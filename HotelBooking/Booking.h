   #ifndef BOOKING_H 
#define BOOKING_H

#include <iostream>
#include <string>
#include <cstdlib> 
#include "Room.h"
#include "Hotel.h"
#include "Customer.h"


using namespace std;


class Booking
{
	//All the private methods are created here
private:
   int bookingId;
	static int bookingSeqN;
	Hotel hotel;
	Room room;
	string roomT;
	Customer customers;


	//All the public methods are created here
public:
   Booking(Hotel& h, string roomType, Customer x);
	
	Hotel getHotel();
	int getBooking() ;
string getRoomType();
   Room getRoom() ;
	Customer getCustomer() ;
	
//mutator functions 
   
	//void setHotel(Hotel h);
	void setRoomType(string roomType);
   //void setCustomer(Customer x);
};
#endif