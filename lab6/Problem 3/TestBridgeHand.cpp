// Author : Dilmanpreet nandu
// date: 22 october 2018
 
//  TestBridgeHand.cpp
//  lab6_3
//

#include "BridgeHand.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main(){
    //INITIAL STRING
    string cards[13] = {"2C", "QD", "TC", "AD", "6C", "3D", "TH", "3H", "5H", "7H", "AS", "JH", "KH"};
    
    
    vector<char> spades;
    vector<char> clubs;
    vector<char> heart;
    vector<char> diamond;
    //ADDING THE CHARACTERS INTO VECTORS
   for(int i = 0; i < 13; i++){
       
       if (cards[i].at(1) == 'S'){
           char c1 = cards[i].at(0);
           spades.push_back(c1);
       }
       
       if (cards[i].at(1) == 'C'){
           char c2 = cards[i].at(0);
           clubs.push_back(c2);
       }
       
       if (cards[i].at(1) == 'H'){
           char c3 = cards[i].at(0);
           heart.push_back(c3);
       }
       
       if (cards[i].at(1) == 'D'){
           char c4 = cards[i].at(0);
           diamond.push_back(c4);
       }
   }

    //DECLARING OBJECT
    Bridge b(spades, clubs, heart, diamond);
    
  
    vector<char> spades1 = b.getSpades();
    vector<char> clubs1= b.getClubs();
    vector<char> heart1 =b.getHeart();
    vector<char> diamond1 = b.getDiamond();
    
    //PRINTING THE VALUES
    cout << " Spades: ";
    for(int i =13; i > 0; i--){
        
        cout << spades1[i] <<" " ;
       
    }
  
    
    
    cout << endl;
    cout << " Heart: ";
    for(int i =13; i > 0; i--){
       
        
        cout << heart1[i] <<" " ;
        
    }
    cout << endl;
    cout << " Diamond: ";
    for(int i =13; i > 0; i--){
      
        cout << diamond1[i] <<" " ;
        
    }
      cout << endl;
    cout << " Clubs: ";
    for(int i =13; i > 0; i--){
        
       
        cout << clubs1[i] <<" " ;
        
    }
    
    cout << endl;
    
    //PRINTING THE POINTS
    cout << " POINTS: " << b.getTotalScore();
    cout << endl;
    
  
    return 0;

}
