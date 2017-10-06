// Author : Dilmanpreet nandu
// Student ID: 100271865

#include <iostream>
#include <string>


#include "Booking.h"
#include "Hotel.h"
#include "Room.h"
#include "Customer.h"

using namespace std;



int main()
{
	
   
   ///test program that creates a the customers  
		Customer Customer1("a","b","a@abc.com");
		Customer Customer2("c","d","c@abc.com");
		
   Hotel empire("empire");
   
   Room singleRoom("s45", 100, "single", "empty");
	Room doubleRoom("d110", 200, "double", "empty");
   Room villa("v5",500, "villa", "empty");
   empire.addRoom(singleRoom);
	empire.addRoom(doubleRoom);
   empire.addRoom(villa);
   
   Booking Book1(empire,"single", Customer1);
   Booking Book2(empire,"villa",Customer2);
   
   
   
   //Display the outputs for the examples 
		cout << "The Room for "<< "Booking ID: " << Book1.getBooking() << " is " << Book1.getRoom() << endl;
		cout << "The Room for "<< "Booking ID: " << Book2.getBooking() << " is " << Book2.getRoom() << endl;
		cout << "The Room for "<< "Booking ID: " << Book2.getBooking() << " is " << Book2.getRoom() << endl;
		
    
      return 0;
}