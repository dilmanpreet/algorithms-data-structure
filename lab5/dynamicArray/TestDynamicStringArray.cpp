// Author : Dilmanpreet nandu
// date: 11 october 2018
 
 #include<iostream>
 
#include"DynamicStringArray.h"

using namespace std;

int main()
{
	//An array is created
	DynamicStringArray test;
	
	
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


	return 0;
}