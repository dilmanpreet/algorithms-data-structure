
// Author : Dilmanpreet Nandu
// Date : 30 October 2018
#include <stdio.h>
#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;

const int ROW = 8;
const int COL = 8;
char board [ROW][COL];

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
//fill the board with spaces, W and B
void fillBoard(){
    
    for(int i = 0; i < ROW; i++ ){
        for(int j = 0; j < COL; j++){
            
            if(i < 2){
                board [i][j] = ' ';
            }
            else if(i > 1 && i < 6){
                board [i][j] = ' ';
            }
            else if (i > 5){
                board [i][j] = ' ';
            }
        }
    }
    
}

void option(int row, int column, int player){
    if (player == 1){
    board[row][column] = 'W';
    }
    if (player == 2){
        board[row][column] = 'B';
    }
    printBoard();
}

bool checkWin(){
    return true;
}


    int main(){
        printBoard();
        fillBoard();
        char letter;
        int num;
        int player =1;
        int turn = 1;
    
        while (checkWin() == true){
            
        if (player == 1 || turn == 1){
        player = 1;
        cout << "Please enter the number corresponding to the row on the board" << '\n';
        cin >> num;
        while (num >8 || num < 1){
            cout << "Wrong input please try again." << '\n';
            cin >> num;
        }
        num = num - 1;
        cout << "Please enter the number corresponding to the column on the board" << '\n';
        cin >> letter;
        letter = (int)letter - 97;
        turn = 2;
        option(num,letter,player);
       
        }
        if (turn == 2 ){
             player = 2;
             
            do {
                srand (time(0));
                int num = rand() % 8;
                int letter = rand() % 8;
                option(num,letter,player);
                } while (board[num][letter] == ' ');
            
            cout << num << '\n';
            cout << letter << '\n';
            turn = 1;
            
        }
        }
        
        
    }
