// CheckPassword.cpp
// Made by Dilmanpreet Nandu
// Student ID: 100271865
// ver 1.0
// 11-09-2018
#include <iostream> 
#include  <iomanip>
#include <stdio.h>
#include <ctype.h>

using  namespace std;

bool checkPassword(string);
int main()
{
   
   string password;     //STRING TO STORE THE PASSWORD
   bool valid = false;  // BOOL TO STORE IF THE PASSWORD IS VALID/INVALID
   
   //READ IN THE PASSWORD
   cout << "enter password: " << endl;
   cin >> password;
   
   //RUN THE CHECKPASSWORD PROGRAM 
   valid= checkPassword(password);
   
   //PRINT THE CHECKPASWORD RESULT
   if( valid == true){
      cout << "Your password :" << password << " is valid password" <<endl;
      }
   else{
      cout << "Your password :" << password << " is invalid password" <<endl;
      }   
    

     
   
   
return 0;   
} 

// ALGORITHM TO CHECKPASSWORD
bool checkPassword(string str){

   int count=0; // COUNT TO KEEP A TRACK OF NUMBER OF DIGITS
   
   if(str.length() < 8)
      return false;  //FAIL IF PASSWORD LESS THAN 8
   
   //UNSIGNED INT AS THE STRING  LENGTH IS UNSIGNED 
   for( unsigned int i=0; i<str.length();i++){
      if( isdigit(str.at(i)))
          count++;
      
      if( isalnum ( str.at(i) ) == false )
         return false; //FAIL IF PASSWORD IS NOT ALPHANUMERIC
      
      }
 
      if(count < 2 )
         return false; //FAIL IF PASSWORD HAS LESS THAN 2 DIGITS

return true;  //PASS IF ALL PASS 
   }

