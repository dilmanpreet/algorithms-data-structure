#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
using namespace std;
class Address
{
    
    	//All the private methods  and varibles are created here
private:

 int streetNumber;
   string city;
   string country;
   string postalCode;
   

	//All the public methods and mutator accessors are created here
public:
 
  Address();

 
 Address(int streetNumber,string city, string country, string postalCode);

 
   int getStreetNumb();
   string getCity();
   string getCountry();
   string getPostalCode();
  

};
#endif