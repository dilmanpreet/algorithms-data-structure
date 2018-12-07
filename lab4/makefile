TestBook: TestBook.o Author.o Address.o Publisher.o Book.o 
	g++ TestBook.o Author.o Address.o Publisher.o Book.o -o TestBook
TestBook.o: TestBook.cpp Author.h Address.h Publisher.h
	g++ -c TestBook.cpp
Book.o: Book.cpp Book.h Publisher.h Author.h 
	g++ -c Book.cpp
Publisher.o: Publisher.cpp Publisher.h Address.h
	g++ -c Publisher.cpp
Address.o: Address.cpp Address.h
	g++ -c Address.cpp
Author.o: Author.cpp Author.h
	g++ -c Author.cpp

