#include <iostream>
#include <iomanip>

using namespace std;


bool checkprime( int num);	
bool checkpalin(int num );
void printArr(int arr[], int size);


int main() 	//main function
{
	
	
	int arr[100]; 
	int n = 0;	//COUNT
	int i=2;	//1 IS UNIQUE NUMBER SO WE SKIP 1
	while (n < 100) {
		if (checkprime(i) && checkpalin(i)){ 
			arr[n] = i;
			n++;
				}      //Checks if number is both palindrome and prime
		i++;
	}
	printArr(arr, 100); //print the stored prime palindromes
	cout<<endl; //end the print
	
	return 0;
  
   }
    //program to check if the number is prime
bool checkprime(int num){
	
	if (num < 2) {	// to skip 1
		return false; 
		}
	else if (num == 2) { // to skip 2
		return true; 
		}
	else {
		for (int i = 2; i < num; i++) {	//every number divisible by 2 is prime
			if (num % i == 0) {
				return false; 
				}
		}
		return true;
	}
   }
   
   //program to check if the number is palindrome
bool checkpalin(int num ){
	int temp = num;
	int rev=0,rem;
	while (temp > 0) {
		rem = temp % 10;
		temp = temp / 10;
		rev = rev * 10 + rem;
	}
	return rev == num;	
     
   }
    //program to print the array
   void printArr(int arr[], int size) {
	   int lineCount=0;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
		lineCount++;
		if (lineCount == 10 ) {  
			lineCount=0; 
			cout << endl;}
	}
}





