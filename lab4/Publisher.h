
#ifndef Publisher_H
#define Publisher_H  


#include <string>
#include <iostream>
 #include "Address.h"



using namespace std;


class Publisher
{
	//All the private methods are created here
private:
	string PName;
	int numberAvailable;
	Address address;

	//All the public methods are created here
public:
	Publisher();
   Publisher(string Name);
void setPublisherName(string Name);
string getPublisher() const;

void setAddress(Address addresss);
	
};
#endif