

// Author : Dilmanpreet Nandu
// Date : 23 October 2018
#include <stdio.h>
#include <iostream>
#include <math.h> 
using namespace std;

int binaryToDecimal(const string& binaryString){
   
    
   int len = binaryString.length();
   
  if(len >= 1 ){
 
   return (binaryString.at(0)-'0') * pow (2, len-1) +  binaryToDecimal(binaryString.substr(1,len-1));
  
      
  } 
}





int main(){
    
        string binaryString;
    	cout << "Please enter the input:" << endl;
    	//getline(cin, binaryString);
        cin >> binaryString;
    int dec=binaryToDecimal(binaryString);
    cout << "Decimal conversion of " << binaryString << " is " << dec;
    
}
