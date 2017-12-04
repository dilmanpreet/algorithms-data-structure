
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;
	void count(const string& s, int counts[]); 
	void print(int counts[], int size);          
   void empty(int counts[], int size);        

int main() {
	int counts[26];	//array for the 26 alphabet to store the count 
	string s;	//string to store input from user
	cout << "input:";	//ask for input
	getline(cin,s);      //take input         
   empty(counts, 26);	//make then equal to 0
   count(s,counts);	//count the occurance and store in array 
	print(counts, 26);	//print out the array
	
	return 0;
}
void count(const string& s, int counts[]){ 
	int alphabet = 0;
	for(int i = 0; i < s.length(); i++) {
		if (isalpha(s.at(i))) {	
			alphabet = tolower(s.at(i)) - 'a';	//convert the alphabet to lower and check which letter is it 
			if (counts[alphabet] <= 0) { 
				counts[alphabet] = 0;
				}
         counts[alphabet]++;// increment the letter count
		}
	}
}
void empty(int counts[], int size){	//empty the the string and make them zero
   for(int i=0; i<size; i++){
      counts[i]=0;
   }
}

void print(int counts[],int size){
	for (int i = 0; i < size; i++) {
		if (counts[i] > 0) {
			char temp = 'a' + i;	
			cout << temp << " " << counts[i] ;
			if(counts[i]==1){
			cout << " time" << endl;}
			else{ cout << " times" << endl;}
		}
	}
}