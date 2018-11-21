// Author : Dilmanpreet nandu
// date: 22 october 2018
 
//  BridgeHand.h
//  lab6_3

#ifndef BridgeHand_h
#define BridgeHand_h

#include <algorithm>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>


using namespace std;

class Bridge{
    
private:
    //MAX SIZE
    const static int SIZE = 13;
   //VECTORS TO STORE SUITS
    vector<char> spades;
    vector<char> clubs;
    vector<char> heart;
    vector<char> diamond;
    
    //VECTORS TO STORE CONVERTED SUITS TO INT
    vector<int> spades_1;
    vector<int> clubs_1;
    vector<int> heart_1;
    vector<int> diamond_1;
    
    //VECTORS TO RETURN VALUES
    vector<char> spades_2;
    vector<char> clubs_2;
    vector<char> heart_2;
    vector<char> diamond_2;
    
    int score;
    
public:
   //CONSTRUCTOR
    Bridge(vector<char> spades1, vector<char> clubs1, vector<char> heart, vector<char> diamond);
    
    //ACCESSORS TO GET SUITS
    vector<char> getSpades();
    vector<char> getClubs();
    vector<char> getHeart();
    vector<char> getDiamond();
    
    //CONVERTING CHAR TO INT
    void conversion();
    
    //CONVERTING INT TO CHAR
    void conversion2();
    
    //IT HELPS TO CONVERT CHAR TO INT
    int getCvalue(char c);
    
    //IT HELPS TO CONVERT CHAR TO INT VECTOR CHAR
    char getCvalue1(int c);
    
    int calculateScore(vector<char>& input);
    //CALCULATIING THE SCORES
    int totalScore;
    //GETTING THE TOTAL SCORE
    int getTotalScore();
};







#endif 
