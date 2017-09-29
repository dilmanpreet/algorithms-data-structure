TestBooking: TestBooking.o Customer.o Hotel.o Booking.o Room.o
	g++ TestBooking.o Customer.o Hotel.o Booking.o Room.o -o TestBooking
TestFraction.o: TestBooking.cpp Customer.h Room.h Booking.h Hotel.h
	g++ -c TestBooking.cpp
Customer.o : Customer.cpp Customer.h
	g++ -c Customer.cpp
Room.o : Room.cpp Room.h
	g++ -c Room.cpp
Hotel.o : Hotel.cpp Hotel.h
	g++ -c Hotel.cpp
Booking.o : Booking.cpp Booking.h
	g++ -c Booking.cpp
 
