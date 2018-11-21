// Author : Dilmanpreet nandu
// date: 10 October 2018

#include <iostream>
#include <sstream>

#include "Author.h"

using namespace std;
//A no-arg constructor to creates a default Author
//int  
Author::Author(){
	Fname = " ";
	Lname = " ";
	mail = " "; 
   
}
//constructor with the values 
Author::Author(string FirstName, string LastName, string email){
  
	Fname = FirstName;
	Lname = LastName;
   mail = email;
 
}
//member function that sets the first name of Author
void Author::setFirstName(string FirstName) {
	Fname = FirstName;
}

//member function that sets the last name of Author
void Author::setLastName(string LastName) {
	Lname = LastName;
}

//member function that sets the email of Author
void Author::setEmail(string email) {
	mail = email;
}

//member function that return the first name of the Author
string Author::getFirstName() {
	return Fname;
}

//member function that return the last name of the Author
string Author::getLastName() {
	return Lname;
}
//member function that return the email of the Author
string Author::getEmail() {
	return mail;
   }
