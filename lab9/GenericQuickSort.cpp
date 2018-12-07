// Author : Dilmanpreet nandu
// date: 6 November 2018

#include<iostream>
#include<string>
#include<algorithm>
#include <ctype.h>
using namespace std;

template<typename T>
T partition(T array[], int start, int finish) {
	T newArray[3] = { array[start],array[finish / 2], array[finish] };	//median of first, middle and last elements of a partition
	
	int position = 0;

	for (int i = 0; i < 10; i++){
		if (array[i] == newArray[1])
			position = i;
	}
	int pivot = array[finish];
	int partitionIndex = start;
	for (int i = start; i < finish; i++)
	{
		if (array[i] <= pivot)
		{
			swap(array[i], array[partitionIndex]);
			partitionIndex++;
		}
	}

	swap(array[partitionIndex], array[finish]);
	return partitionIndex;
}

template<typename T>
void quickSort(T array[], int start, int finish)
{
	if (start < finish) {
		int pivot = partition(array, start, finish);
		quickSort(array, start, pivot - 1);
		quickSort(array, pivot + 1, finish);
	}
}
int main()
{
	
	
	//TestOne Integers
	int testOne[] = {1,4,7,0,2,8,5,9,3,6,3 };
	cout << "Before sorting testCaseOne is: ";
	int sizeOne = 10;
	for (int i = 0; i <= sizeOne; i++)
	{
		cout << testOne[i] << " ";
	}
	
	
	cout << endl;
	cout << "After sorting TestCaseOne is: ";
	quickSort(testOne, 0, sizeOne);

	for (int i = 0; i <= sizeOne; i++)
	{
		cout << testOne[i] << " ";
	}
	cout << endl;
	
	//TestTwo Characters
	cout << "Before sorting TestTwo is: ";
	char TestTwo[] = { 'x','c','z','v','b','a' };
	int sizeTwo = 5;
	for (int i = 0; i <= sizeTwo; i++)
	{
		cout << TestTwo[i] << " ";
	}
	cout << endl;
	cout << "After sorting TestTwo is: ";
	
	quickSort(TestTwo, 0, sizeTwo);
	for (int i = 0; i <= sizeTwo; i++)
	{
		cout << TestTwo[i] << " ";
	}
	cout << endl;
	
	
	//TestThree 
	cout << "Before sorting TestThree is: ";
	int TestThree[] = {91,48,78,44,55,65};
	int sizeThree = 5;
	for (int i = 0; i <= sizeThree; i++)
	{
		cout << TestThree[i] << " ";
	}
	cout << endl;
	cout << "After sorting TestThree is: ";
	
	quickSort(TestThree, 0, sizeThree);
	for (int i = 0; i <= sizeThree; i++)
	{
		cout << TestThree[i] << " ";
	}
	cout << endl;
	
	return 0;
}


