   #ifndef Book_H 
#define Book_H

#include <iostream>
#include <string>
#include <cstdlib> 
#include "Address.h"
#include "Publisher.h"
#include "Author.h"


using namespace std;

const int MAX_AUTHORS=3;
class Book
{
	//All the private methods are created here
private:
   int BookId;
	static int ISBN;
	Publisher Publisher;
	Address Address;
	string AddressT;
	Author Authors;

 Author authorArray[MAX_AUTHORS];
	//All the public methods are created here
public:
   Book(Publisher& h, string AddressType, Author x);
	
	Publisher getPublisher();
	int getBook() ;
string getAddressType();
   Address getAddress() ;
	Author getAuthor() ;
	
//mutator functions 
   
	//void setPublisher(Publisher h);
	void setAddressType(string AddressType);
   //void setAuthor(Author x);
};
#endif