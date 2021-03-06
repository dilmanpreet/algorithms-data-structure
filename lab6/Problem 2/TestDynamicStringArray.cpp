// Author : Dilmanpreet nandu
// date: 22 october 2018
 
#include <vector>
#include <iostream>
#include <array>
 
#include"DynamicStringArray.h"

using namespace std;

int main()
{
	//An array is created
	DynamicStringArray<string> test;
	
	
	//Add entries
	test.addEntry("one");
	test.addEntry("two");
	test.addEntry("three");
	
	cout<<"The size of array is "<<test.getSize()<<endl;
	
	cout << "The input Number one is " << test.getEntry(0)<<endl;
	cout << "The input Number two is " << test.getEntry(1)<<endl;
	cout << "The input Number three is " << test.getEntry(2)<<endl;
	
	cout << "Try to get out of bound entry we get " << test.getEntry(3)<<endl;
	
	cout << "Deleting entry two" <<endl;
	test.deleteEntry("two");
	
	
	cout << "The number two is now " << test.getEntry(1) << endl;
	
	cout << "The number one is still " << test.getEntry(0) << endl;
	
	cout<<"The size of array now is "<<test.getSize()<<endl;
	
	cout<<"copying arrays "<<endl;
	DynamicStringArray copyTest(test);
	cout << "The number one in copy array is "<<copyTest.getEntry(0)<<endl;
	
	//Testing integer array
    DynamicStringArray<int> arrInt;
    //adding strings
    arrInt.addEntry(3);
    arrInt.addEntry(4);
    arrInt.addEntry(5);
    
    	cout<<"The size of int array is "<<arrInt.getSize()<<endl;
	
	cout << "The input Number one is " << arrInt.getEntry(0)<<endl;
	cout << "The input Number two is " << arrInt.getEntry(1)<<endl;
	cout << "The input Number three is " << arrInt.getEntry(2)<<endl;


	return 0;
}