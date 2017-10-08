// Author : Dilmanpreet nandu
// date: 8 october 2017

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
		Customer John("John", "Doe", "johndoe@gmail.com");
		
   Hotel empire("empire");
   
   Room singleRoom("s45", 100, "single");
	Room doubleRoom("d110", 200, "double");
   Room villa("v5",500, "villa");
   empire.addRoom(singleRoom);
	empire.addRoom(doubleRoom);
   empire.addRoom(villa);
   
   Booking Book1(empire,"single", Customer1);
   Booking Book2(empire,"villa",Customer2);
   Booking Book3(empire,"double", John);
   
   
   
   //Display the outputs for the examples 
		cout << "The Room for "<< "Booking ID: " << Book1.getBooking() << " is "  << Book1.getRoomType() <<endl;
		cout << "The Room for "<< "Booking ID: " << Book2.getBooking() << " is " << Book2.getRoomType()  << endl;
		cout << "The Room for "<< "Booking ID: " << Book2.getBooking() << " is "  << Book2.getRoomType() << endl;
		
    
      return 0;
}