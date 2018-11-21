// Author : Dilmanpreet nandu
// date: 6 November 2018

#include<iostream>
#include<string>
#include<algorithm>
#include <ctype.h>
using namespace std;

void insertionSort(int array[], int finish)
{
   if(finish > 1){
       insertionSort(array, finish-1);
       
       int currentE = array[finish-1];
       int k;
       for ( k= finish-1-1;k >=0 && array[k] > currentE; k--)
        array[k + 1] =  array[k];
        
        array[k+1]=currentE;
   }
	
}

int main()
{
	//TestOne Integers
	int testOne[] = {4,1,3,0,2,8,5,9,3,6,0 };
	cout << "Before sorting testCaseOne is: ";
	int sizeOne = 10;
	for (int i = 0; i <= sizeOne; i++)
	{
		cout << testOne[i] << " ";
	}
	
	
	cout << endl;
	cout << "After sorting TestCaseOne is: ";
	insertionSort(testOne,  sizeOne+1);

	for (int i = 0; i <= sizeOne; i++)
	{
		cout << testOne[i] << " ";
	}
	cout << endl;
	

	
	return 0;
}


