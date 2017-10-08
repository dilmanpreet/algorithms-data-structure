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
		Customer Customer1("Bob","Hill","a@abc.com");
		Customer Customer2("Chad","Munroe","c@abc.com");
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
		cout << "The Room for Booking ID: " << Book1.getBooking() << " is "  << Book1.getRoom().getRoomNumber() <<endl;		
		cout<< "Room booked in the name of " << Book1.getCustomer().getFirstName()<< " for a " << Book1.getRoomType() << " bedroom suite"<<endl;
		cout<< "Final bill amount for $" <<  Book1.getRoom().getRoomPrice() << " emailed to " << Book1.getCustomer().getEmail()<< endl;
		
		
		cout << "\nThe Room for Booking ID: " << Book2.getBooking() << " is "  << Book2.getRoom().getRoomNumber() <<endl;		
		cout<< "Room booked in the name of " << Book2.getCustomer().getFirstName()<< " for a " << Book2.getRoomType() << " bedroom suite"<<endl;
		cout<< "Final bill amount for $" <<  Book2.getRoom().getRoomPrice() << " emailed to " << Book2.getCustomer().getEmail()<< endl;
		
		
		cout << "\nThe Room for Booking ID: " << Book3.getBooking() << " is "  << Book3.getRoom().getRoomNumber() <<endl;		
		cout<< "Room booked in the name of " << Book3.getCustomer().getFirstName()<< " for a " << Book3.getRoomType() << " bedroom suite"<<endl;
		cout<< "Final bill amount for $" <<  Book3.getRoom().getRoomPrice() << " emailed to " << Book3.getCustomer().getEmail()<< endl;
		
    
      return 0;
}