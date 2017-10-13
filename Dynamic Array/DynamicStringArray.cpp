// Author : Dilmanpreet nandu
// date: 11 october 2017
 
 #include "DynamicStringArray.h"
#include <string>
#include <sstream>

using namespace std;

//empty constructor
DynamicStringArray::DynamicStringArray()
{
	dynamicArray =NULL;
	size = 0;
}
//constructor with the values 
DynamicStringArray::DynamicStringArray(const DynamicStringArray &copy)
{
	 size = copy.size;
	
	dynamicArray = new string[size];
	
	for (int i = 0; i < size; i++)
	{
		dynamicArray[i] = copy.dynamicArray[i];
	}
}

//member function that returns the size
int DynamicStringArray::getSize()
{
	return size;
}
//member function that adds a new entry 
void DynamicStringArray::addEntry(string input)
{
	
	string* newArr = new string[ 1+size];
	
	for (int i = 0; i < size;i++){
		newArr[i] = dynamicArray[i];
	}
	
	newArr[size] = input;
	
	delete[] dynamicArray;
	
	dynamicArray = newArr;
	size++;

}
//member function that used to delete the given entry
bool DynamicStringArray::deleteEntry(string input)
{
	//finding the index of input
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (dynamicArray[i] == input)
			index = i;
	}
	
	if (index == -1)
		return false;
	//c
	string* newArr = new string[size - 1];
	for (int i = 0,j = 0; i < size; i++){
		if (i == index)
			index = -1;
		else {
			newArr[j] = dynamicArray[i];
			j++;
		}
	}
	delete[]dynamicArray;
	dynamicArray = newArr;
	size--;
	
	return true;
}
//member function that returns the string at that index in dynamicArray or else index out of bounds
string DynamicStringArray::getEntry(int input)
{
	if (input < size)
		return dynamicArray[input];
	else {
		return "Index is out of bounds.";
		
	}
		
}
//The destructor
DynamicStringArray::~DynamicStringArray()
{
	delete[]dynamicArray;
}





