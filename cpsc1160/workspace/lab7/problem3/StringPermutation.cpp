
// Author : Dilmanpreet Nandu
// Date : 28 October 2018
//


#include <stdio.h>
#include<iostream>

using namespace std;
void displayPermutation(const string& s1, const string& s2){
     
     
    //  cout << "test" << endl;
     if (s2 == ""){
     
        cout << s1 << endl;
    }
    else{
        
        for(unsigned long i = 0; i < s2.length(); i++) {
            string n1 = s1 + s2[i];
            string n2 = s2.substr(0, i) + s2.substr(i+1);
         
            displayPermutation(n1, n2);
        }
    }
    
}

void displayPermutation(const string& s){
    // cout << "test" << endl;
    displayPermutation("",s);
    
}



int main(){
    
    string s;
    
    cout << "Please enter the string: ";
    getline(cin, s, '\n');
    //print
    displayPermutation(s);
    
    
}
