#include "Address.h"
#include <string>
using namespace std;

Address::Address(){
   
   
   
   }
  Address::Address(int aStreetNumber,string aCity, string aCountry, string aPostalCode)
  {
      streetNumber=aStreetNumber;
       city=aCity;
      country=aCountry;
       postalCode=aPostalCode;
   }
   int Address::getStreetNumb(){
      
      return streetNumber;
   }
   string Address::getCity(){
      
      return city;
   }
    string Address::getCountry(){
      
      return country;
   }
   string Address::getPostalCode(){
      
      return postalCode;
   }
   