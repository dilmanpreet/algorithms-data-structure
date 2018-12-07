// Author : Dilmanpreet nandu
// date: 22 october 2018
 //  BridgeHand.cpp
//  lab6_3

#include "BridgeHand.h"
#include <vector>
#include <iostream>
using namespace std;
//CONSTRUCTORS WITH VECTOR ARGUMENTS TO GET SUITS
Bridge :: Bridge(vector<char> spades1, vector<char> clubs1, vector<char> heart1, vector<char> diamond1){
    
        spades = spades1;
        clubs = clubs1;
        heart = heart1;
        diamond=  diamond1;
        score = 0;
    
        totalScore = 0;
        conversion();
        conversion2();
 
    
}

//CONVERTING AND SORTING THE SUITS
void Bridge:: conversion(){
   
    for(int i = 0; i < SIZE; i++){
        
        spades_1.push_back(getCvalue(spades[i]));
        heart_1.push_back ( getCvalue(heart[i]));
        clubs_1.push_back (getCvalue(clubs[i]));
        diamond_1.push_back (getCvalue(diamond[i]));
    }
    sort(spades_1.begin(), spades_1.end());
    sort(heart_1.begin(), heart_1.end());
    sort(clubs_1.begin(), clubs_1.end());
    sort(diamond_1.begin(), diamond_1.end());
    

}
//CONVERSION USING ASCII
int Bridge :: getCvalue( char c){
   
  
 
    if(c == 'T'){
        return 10;
    }
    if(c == 'J'){
        return 11;
    }
    if(c == 'Q'){
        return 12;
    }
    if(c == 'K'){
        return 13;
    }
    if(c == 'A'){
        return 14;
    }
    else{
        return (int)c -48;
    }
}

//CONVERTING BACK TO CHAR FROM INT
void Bridge :: conversion2(){
    

    
    for(int i = 0; i < 13; i++){
        
        spades_2.push_back(getCvalue1(spades_1[i]));
        heart_2.push_back(getCvalue1(heart_1[i]));
        clubs_2.push_back(getCvalue1(clubs_1[i]));
        diamond_2.push_back(getCvalue1(diamond_1[i]));
    }
   
    
}
//CONVERSION USING ASCII
char Bridge :: getCvalue1(int c){
    

    if(c == 10){
        return 'T';
    }
    if(c == 11){
        return 'J';
    }
    if(c == 12){
        return 'Q';
    }
    if(c == 13){
        return 'K';
    }
    if(c == 14){
        return 'A';
    }
    else{
        return ('0'+ c);
    }
    
}

//CALCULATING THE SCORE
int Bridge:: calculateScore(vector<char>& arr)
{
    int score = 0;
    
    if (arr.size() == 0)
    {
        score = 3;
        return score;
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 'J')
            score += 1;
        if (arr[i] == 'Q')
            score += 2;
        if (arr[i] == 'K')
            score += 3;
        if (arr[i] == 'A')
            score += 4;
    }
    
    if (arr.size() == 1)
        score += 2;
    
    if (arr.size() == 2)
        score += 1;
    
    if (arr.size() > 5)
    {
        int num = (int)arr.size() - 5;
        score += num;
    }
    return score;
}


    vector<char> Bridge :: getSpades(){
        
        return spades_2;
    }
    
    vector<char> Bridge :: getClubs(){
        return clubs_2;
    }
    
    vector<char> Bridge :: getHeart(){
        return heart_2;
    }
    vector<char> Bridge :: getDiamond(){
        return diamond_2;
    }

// CALCULATING THE TOTAL SCORE
int Bridge :: getTotalScore(){
    int totalScore1 = calculateScore(spades);
    int totalScore2 = calculateScore(clubs);
    int totalScore3 = calculateScore(heart);
    int totalScore4= calculateScore(diamond);
    totalScore = totalScore1 + totalScore2 +totalScore3 + totalScore4;
    return totalScore;
}

