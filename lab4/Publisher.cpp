// Author : Dilmanpreet nandu
// date: 8 october 2018

#include <iostream>
#include <string>
#include <cstdlib> 
#include "Publisher.h"
#include "Address.h"

using namespace std;

//A no-arg constructor to creates a default Publisher with Addresss
Publisher::Publisher() {
	PName = " ";
	address = new address();

}

//This Constructor initialises a Publisher  with the given name.  
Publisher::Publisher(string Name) {
	hName = Name;

}

// This function sets the name of the Publisher as given string
 
void Publisher::setPublisherName(string Name) {
	PName = Name;
}

//member function that returns the name of the Publisher
 
string Publisher::getPublisher() const {
	return PName;
}


//member function that add Address to the given Publisher
void Publisher::setAddress(Address Addresss) {
    
    address == Addresss;
	
	}
}


 
