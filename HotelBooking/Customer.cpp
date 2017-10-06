// Author : Dilmanpreet nandu
// Student ID: 100271865
// date: 4 october 2017
// was having issues seeked help from https://stackoverflow.com/questions/11920449/my-string-isnt-copying-from-private-variables

#include <iostream>
#include <sstream>

#include "Customer.h"

using namespace std;
//A no-arg constructor to creates a default Customer
//int Customer:: CustomerSeqN=400; 
Customer::Customer(){
	Fname = " ";
	Lname = " ";
	mail = " "; 
   
}
//constructor with the values 
Customer (  FirstName ,  LastName,  email){
  // CustomerSeqN++;
	Fname = FirstName;
	Lname = LastName;
   mail = email;
  // cusID= CustomerSeqN;
}
//member function that sets the first name of customer
void Customer::setFirstName(string FirstName) {
	Fname = FirstName;
}

//member function that sets the last name of customer
void Customer::setLastName(string LastName) {
	Lname = LastName;
}

//member function that sets the email of customer
void Customer::setEmail(string email) {
	mail = email;
}

//member function that return the first name of the customer
string Customer::getFirstName() {
	return Fname;
}

//member function that return the last name of the customer
string Customer::getLastName() {
	return Lname;
}
//member function that return the email of the customer
string Customer::getEmail() {
	return mail;
   }
/*string Customer::getCustomerID() {
	return cusID;
}*/