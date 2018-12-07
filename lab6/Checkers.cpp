//
//  main.cpp
//  lab8
//  Created by Dalwinder Singh on 2016-11-02.
//  Copyright © 2016 Dalwinder Singh. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <ctime>
#include <time.h>

using namespace std;

const int ROW = 8;
const int COL = 8;
char board [ROW][COL];
int points = 0;
int points2 = 0;

void fillBoard();
void printBoard();
void changePosition(int, int, int, int);
void changePosition2(int, int, int, int);
int conversion1(char);
int conversion2(char);
bool isValid(int, int, int, int);
bool isValid2(int, int, int, int);
bool getWinner();
void computerPlay();
void computerPlay2();

int main() {
    string color;
    string s;
    
    fillBoard();
    printBoard();
	
    cout << "Enter your color (B or W) to play: " ;
    getline(cin, color) ;
   
    if(color == "B"){
        cout << "You play black" << endl;
        cout << "Computer plays White" << endl;
		do{
		cout << "Enter the from-square followed by the to-square (e.g. 7a 6b): " ;
        getline(cin, s, '\n');
            
        char s1 = s[0];
        char s2 = s[1];
            
        char s3 = s[3];
        char s4 = s[4];
            
        int rPos1 = conversion1(s1);
        int cPos1 = conversion2(s2);
            
        int rPos2 = conversion1(s3);
        int cPos2 = conversion2(s4);
		
        if(!(isValid(rPos1, cPos1, rPos2, cPos2))){
            changePosition(rPos1, cPos1, rPos2, cPos2);
            cout << endl;
            printBoard();
            cout << endl;
        }
		else
			cout << "Wrong move" << endl;
			
		computerPlay();
		printBoard();
        cout << endl;
		}while(!(getWinner()));
	}
    
	else if(color == "W"){
		cout << "You play white" << endl;
		cout << "Computer plays black" << endl;
		do{
			cout << "Enter the from-square followed by the to-square (e.g. 7a 6b): " ;
			getline(cin, s, '\n');
            
			char s1 = s[0];
			char s2 = s[1];
            
			char s3 = s[3];
			char s4 = s[4];
            
			int rPos1 = conversion1(s1);
			int cPos1 = conversion2(s2);
            
			int rPos2 = conversion1(s3);
			int cPos2 = conversion2(s4);
            
			if(isValid2(rPos1, cPos1, rPos2, cPos2)){
				changePosition2(rPos1, cPos1, rPos2, cPos2);
				cout << endl;
				printBoard();
                cout << endl;
			}
			
			else
				cout << "Wrong move" << endl;
			computerPlay2();
			printBoard();
			cout << endl;
		}while(!(getWinner()));
	}
	else{
		cout << "You play black" << endl;
		cout << "Computer plays white" << endl;
		do{
			cout << "Enter the from-square followed by the to-square (e.g. 7a 6b): " ;
			getline(cin, s, '\n');
			
			char s1 = s[0];
			char s2 = s[1];
			
			char s3 = s[3];
			char s4 = s[4];
			
			int rPos1 = conversion1(s1);
			int cPos1 = conversion2(s2);
			
			int rPos2 = conversion1(s3);
			int cPos2 = conversion2(s4);
			
			if(!(isValid(rPos1, cPos1, rPos2, cPos2))){
				changePosition(rPos1, cPos1, rPos2, cPos2);
				cout << endl;
				printBoard();
                cout << endl;
			}
			else
				cout << "Wrong move" << endl;
			computerPlay();
			printBoard();
            cout << endl;
		}while(!(getWinner()));
		
	}
	
    cout << endl;
    return 0;
}

//changing the position of player
void changePosition(int rPos1, int cPos1, int rPos2, int cPos2){
	char e = ' ';
	
	if((rPos2 == (rPos1 - 2) && cPos2 == (cPos1 + 2)) || (rPos2 == (rPos1 - 2) && cPos2 == (cPos1 - 2))) {
		if(board[rPos2 -1][cPos2 -1] == 'W' && board[rPos2][cPos2] == ' '){
			board[rPos2][cPos2] = board[rPos1][cPos1];
			board[rPos1][cPos1] = e;
			points++;
		}
		
	}
	if((rPos2 == (rPos1 - 1) && cPos2 == (cPos1 + 1)) || (rPos2 == (rPos1 - 1) && cPos2 == (cPos1 - 1))){
		char t = board[rPos2][cPos2];
		board[rPos2][cPos2] = board[rPos1][cPos1];
		board[rPos1][cPos1] = t;
	}
	else
		cout << "Wrong move" << endl;
}

void changePosition2(int rPos1, int cPos1, int rPos2, int cPos2){
	char e = ' ';
	if((rPos2 == (rPos1 +2) && cPos2 == (cPos1 + 2)) || (rPos2 == (rPos1 + 2) && cPos2 == (cPos1 - 2))) {
		if(board[rPos2 -1][cPos2 -1] == 'B' && board[rPos2][cPos2] == ' '){
			board[rPos2][cPos2] = board[rPos1][cPos1];
			board[rPos1][cPos1] = e;
			points2++;
		}
		
	}
	if((rPos2 == (rPos1 + 1) && cPos2 == (cPos1 + 1)) || (rPos2 == (rPos1 + 1) && cPos2 == (cPos1 - 1))){
		char t = board[rPos2][cPos2];
		board[rPos2][cPos2] = board[rPos1][cPos1];
		board[rPos1][cPos1] = t;
		
	}
	else
		cout << "Wrong move" << endl;
}
// Check whether moves of black diagnoally or not
bool isValid(int rPos1, int cPos1, int rPos2, int cPos2)
{
	if (rPos2 == rPos1 - 1  && cPos2 == cPos1)
		return false;// No conflict
	
	else if(rPos2 > (rPos1 - 2) && cPos2 > (cPos1 - 2))
		return false;
	else if (rPos2 > (rPos1 -2) && cPos2 > (cPos1 + 2))
		return false;// No conflict

	if(rPos2 < ROW && cPos2 < COL)
		return true;// No conflict
	if(rPos2 >=0 && cPos2 >=0)
		return true;// No conflict
	
    return true; // There is a conflict
}


// Check whether moves of white diagnoally or not
bool isValid2(int rPos1, int cPos1, int rPos2, int cPos2)
{
	if (rPos2 == rPos1  && cPos2 == cPos1)
		return false;// No conflict
	else if(rPos2 > (rPos1 + 2) && cPos2 > (cPos1 - 2))
		return false;
	else if (rPos2 > (rPos1 +2) && cPos2 > (cPos1 + 2))
		return false;// No conflict
	
    if(rPos2 < ROW && cPos2 < COL)
        return true;// No conflict
    if(rPos2 >=0 && cPos2 >=0)
        return true;// No conflict
	
    return true; // There is a conflict
}

//changing number char to int to get index
int conversion1(char s){
    char arr[ROW] = {'1','2','3','4','5','6','7', '8'};
    int num = 0;
    for(int i = 0; i < ROW; i++){
        if(s == arr[i]){
            num = i;
        }
    }
    return num;
}

//changing alphabet char to int to get index
int conversion2(char s){
    char arr[ROW] = {'a','b','c','d','e','f','g', 'h'};
    int num = 0;
    for(int i = 0; i < ROW; i++){
        if(s == arr[i]){
            num = i;
        }
    }
    return num;
}

//fill the board with spaces, W and B
void fillBoard(){
    
    for(int i = 0; i < ROW; i++ ){
        for(int j = 0; j < COL; j++){
            
            if(i < 2){
                board [i][j] = 'W';
            }
            else if(i > 1 && i < 6){
                board [i][j] = ' ';
            }
            else if (i > 5){
                board [i][j] = 'B';
            }
        }
    }
    
}

//checking the winner
bool getWinner(){
	if(points == 16 || points2 == 16)
		return true;
	return false;
}

//printing the board
void printBoard(){
    
    int count = 1;
    int n = 0;
    //printing header of the board
    string abc = " | a   b   c   d   e   f   g   h |";
    cout << abc << endl;
    cout << " |-------------------------------|" << endl;
    
    //printing the board
    for(int i = 0; i < ROW; i++ ){
        n = i;
        cout  << count + i << "| ";
        for(int j = 0; j < COL; j++){
            string p = "---+---+---+---+---+---+---+---";
            cout << board [i][j] << " | ";
            if(j == 7){
                cout << endl;
                cout << " |";
                if(n < 7)
                    cout << p;
                if(n == 7)
                    cout << "-------------------------------";
            }
        }
        cout << "|";
        cout << endl;
    }
}
//computer play for white

void computerPlay(){
	
	int rPos1, cPos1, rPos2 = 0 , cPos2 = 0;
	srand (time(0));
	do{
		do{
			rPos1 = rand()% 8 + 1;
			cPos1 = rand()% 8 + 1;
			
		}while(board[rPos1][cPos1] != 'W');
		
		if(board[rPos1 + 1][cPos1 + 1] == ' '){
			
			rPos2 = rPos1 + 1;
			cPos2 = cPos1 + 1;
			
		}
		
		if(board[rPos1 + 1][cPos1 - 1] == ' '){
			rPos2 = rPos1 + 1;
			cPos2 = cPos1 - 1;
		}

	}while((board[rPos1 + 1][cPos1 + 1] != ' ')|| (board[rPos1 + 1][cPos1 - 1] != ' '));
	
	changePosition2(rPos1, cPos1, rPos2, cPos2 );

	
	
}
//computer play for black
void computerPlay2(){
	
	int rPos1, cPos1, rPos2 = 0 , cPos2 = 0;
	srand (time(0));
	do{
		do{
			rPos1 = rand()% 8 + 1;
			cPos1 = rand()% 8 + 1;
			
		}while(board[rPos1][cPos1] != 'B');
		
		if(board[rPos1 - 1][cPos1 - 1] == ' '){
			
			rPos2 = rPos1 - 1;
			cPos2 = cPos1 - 1;
			
		}
		
		if(board[rPos1 - 1][cPos1 + 1] == ' '){
			rPos2 = rPos1 - 1;
			cPos2 = cPos1 + 1;
		}
		
	}while((board[rPos1 - 1][cPos1 + 1] != ' ')|| (board[rPos1 - 1][cPos1 - 1] != ' '));
	
	changePosition(rPos1, cPos1, rPos2, cPos2 );
	
	
	
}

