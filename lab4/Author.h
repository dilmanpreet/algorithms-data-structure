   #ifndef Author_H
#define Author_H


#include <iostream>
#include <string>



using namespace std;


class Author
{
	//All the private methods are created here
private:
	string Fname;
	string Lname;
   string mail;
	
	//All the public methods are created here
public:
  // int AuthorId();

	Author();	//default constructor
	
	Author(string FirstName, string LastName, string email);//A constructor with data field
	
//accessor and mutator functions are below
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmail(string email);
	

string getFirstName();
string getLastName();
string getEmail();
//string GetAuthorID();

};
#endif
