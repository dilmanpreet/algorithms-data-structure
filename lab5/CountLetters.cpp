// Author : Dilmanpreet nandu
// date: 9 october 2018


#include <iostream>
#include <string>


using namespace std;
	int* count(const string& s);
	void print(int counts[], int size);          
   void empty(int counts[], int size);        

int main() {

	string s;	//string to store input from user
	cout << "input:";	//ask for input
	getline(cin,s);      //take input         
   
   count(s);	//count the occurance and store in array and print out 
	
	
	return 0;
}
int* count(const string& s){ 
    
    	int counts[26];	//array for the 26 alphabet to store the count 
    	empty(counts, 26);	//make then equal to 0
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
	print(counts, 26);	//print out the array
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
			cout << temp << ": " << counts[i] ;
			if(counts[i]==1){
			cout << " time" << endl;}
			else{ cout << " times" << endl;}
		}
	}
}