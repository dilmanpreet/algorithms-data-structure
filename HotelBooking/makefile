TestBooking: TestBooking.o Customer.o Room.o Hotel.o Booking.o 
	g++ TestBooking.o Customer.o Room.o Hotel.o Booking.o -o TestBooking
TestBooking.o: TestBooking.cpp Customer.h Room.h Hotel.h
	g++ -c TestBooking.cpp
Booking.o: Booking.cpp Booking.h Hotel.h Customer.h 
	g++ -c Booking.cpp
Hotel.o: Hotel.cpp Hotel.h Room.h
	g++ -c Hotel.cpp
Room.o: Room.cpp Room.h
	g++ -c Room.cpp
Customer.o: Customer.cpp Customer.h
	g++ -c Customer.cpp

