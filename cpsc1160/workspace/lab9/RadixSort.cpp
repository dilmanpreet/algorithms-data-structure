// Author : Dilmanpreet nandu
// date: 12 November 2018
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int temp[10];
void radixsort(vector<int> input, int ArrSize, int Range)
{
	int divident=0;
	int div = 1;
	for (int j = divident; j < Range; j++) {
		int rem = 0;
		int index = 0;
		while (rem < ArrSize) {
			for (int i = 0; i < ArrSize; i++) {
				if ((input[i] / div) % 10 == rem) {
					temp[index] = input[i];
					index++;
				}
			}
			rem++;
		}
		div *= 10;
		for (int i = 0; i < 10; i++) {
			input[i] = temp[i];
			temp[i] = 0;
		}
	}
	for (int i = 0; i < ArrSize; i++) {
		cout << " " << input[i];
	}
	cout << endl;
}
int main()
{
	vector<int> testOne = { 21,245,78,69,98,758,889,128,54,6 };
	int Range = 3;
	int ArrSize = 10;
	cout << "Before sorting TestOne is: ";
	for (int i = 0; i < ArrSize; i++)
	{
		cout << testOne[i] << " ";
	}
	cout << endl;
	cout << "After sorting TestOne is: ";
	radixsort(testOne, ArrSize, Range);
	
	

	return 0;
}