#ifndef CUSTOMER_H
#define CUSTOMER_H


#include <iostream>
#include <string>



using namespace std;


class Customer
{
	//All the private methods are created here
private:
	string Fname;
	string Lname;
   string mail;
	
	//All the public methods are created here
public:
  // int CustomerId();

	Customer();	//default constructor
	
	Customer(string FirstName, string LastName, string email);//A constructor with data field
	
//accessor and mutator functions are below
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmail(string email);
	

string getFirstName();
string getLastName();
string getEmail();
//string GetCustomerID();

};
#endif
