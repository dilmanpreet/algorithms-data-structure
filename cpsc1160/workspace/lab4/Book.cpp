// Author : Dilmanpreet nandu
// date: 8 october 2018
 
#include <iostream>
#include <string>

#include "Book.h"
#include "Publisher.h"
#include "Address.h"
#include "Author.h"
using namespace std;

int Book:: ISBN=1000000;


//constructor with the values 
Book::Book(Publisher& h, string AddressType, Author x)
{
   ISBN++;
   BookId = ISBN;  
	Publisher = h;
	AddressT = AddressType;
	Address = Publisher.findAvailableAddress(AddressT);
	Authors = x;
	
}

//member function that returns the value of the Book id
int Book::getBook() 
{
	return BookId;
}
//member function that returns the value of the Addresstype
string Book::getAddressType() 
{
	return AddressT;
	};

//member function that returns the value of the Publisher we are Book
Publisher Book::getPublisher()  {
	return Publisher;
}

//member function that returns the value of the Author we are Book for
Author Book::getAuthor() {
	return Authors;
}

//member function that returns the value of the Address we are Book for
Address Book::getAddress() {
	return Address;
}
//member function changes the Address to other Author
//void Book::setAuthor(Author x) {
//	Author = x;
//}


//member function changes the Address to other Author
void Book::setAddressType(string AddressType) {
	AddressT = AddressType;
}

