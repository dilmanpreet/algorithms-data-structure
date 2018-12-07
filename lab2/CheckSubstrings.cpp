// Made by Dilmanpreet Nandu
// Student ID: 100271865
// ver 1.0
// 18-09-2018

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int indexOf(const string& s1, const string& s2);

int main()
{
    //initialize the parameters
    string string1, string2;
    
    //get the input from user
    cout << " the first string"<< endl;
    getline (cin, string1);
   cout << "Enter the second string:"<< endl;
   getline (cin, string2);
   
   
   int x = indexOf(string1, string2);
   
   
    cout << x;
   //indexOf("welcome", "We welcome you!");

   
   
}


int indexOf(const string& s1, const string& s2){
    int breakpoint = -1;
    
    if( s1.length() > s2.length())  //if s2 is smaller than s1 first string cannot be substring of second
        return -1 ; //-1 if it is not a substring  
        
   string temp = "";
   for(int i = 0 ; i < s2.length(); i++ ){
       int j=0;
       
       if(s2[i] == s1[j]){
            breakpoint = i;
            //cout << "breakpoint=" << breakpoint <<endl;
            //temp = temp + s2[i];
           for( j = 0 ; j < s1.length() ; j++ ){
               
               //cout << "j=" << j <<endl;  
               
               
               temp = temp + s2[i];
               i++;
           }
           //cout << temp;
           if( s1.compare(temp) == 0)
             return breakpoint;
       }
       
   }
   return -1;
}
