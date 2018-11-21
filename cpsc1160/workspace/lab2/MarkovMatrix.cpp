 // Made by Dilmanpreet Nandu
// Student ID: 100271865
// ver 1.0
// 23-09-2018

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 3;
bool isMarkovMatrix(const double m[][SIZE]); 
void printMatrix(const double m[][SIZE]);

int main()
{
    double mark[SIZE][SIZE] ;
    cout << "Enter a 3 by 3 matrix : " << endl;
   
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cin >> mark [i] [j] ;
        }
    }
    
    printMatrix(mark);
    
    if (isMarkovMatrix(mark)){
        cout<<"It is a Markov matrix";
    }
    else{
        cout<<"It is not a Markov matrix";
    }
    
    
    
    return 0;
}
bool isMarkovMatrix(const double m[][SIZE]) {
   double col1=0,col2 =0 ,col3 = 0;
    for (int i = 0; i < SIZE; i++) {
        
        int j;
         
        //  sum of each column
        
        col1 = col1 + m[i][j];
        cout << col1;
        for ( j= 0; j < SIZE; j++){
            
            if(j == 0);
        }
            
            
        if(col1 != 1)
         return false;
      
                                   
    }
   
    
    return true;
}

void printMatrix(const double m[][SIZE]) {
    
    for (int i = 0; i < SIZE; i++) {
        for(int j = 0 ; j < SIZE ; j++){
            cout << m[i][j];
        }
        cout << endl;
    }
    
    
}