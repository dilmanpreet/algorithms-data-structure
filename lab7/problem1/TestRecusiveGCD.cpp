// Author : Dilmanpreet Nandu
// Date : 23 October 2018
#include <stdio.h>
#include <iostream>

 int gcd(int m, int n);
using namespace std;

int main(){
    
    int num1, num2;
    	cout <<"enter num1:";
    cin >> num1 ; 
    cout << "enter num2:";;
    cin>> num2;
    cout<<endl;
    int rem=gcd(num1,num2);
    cout << "gcd is " << rem;
    
    
}

int gcd(int m, int n){
    
    if(m%n == 0){
        return n;
    }
    else{
        gcd(n, m  % n);
    }
    
}