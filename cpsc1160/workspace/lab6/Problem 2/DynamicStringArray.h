#ifndef DYNAMICSTRINGARRAY_H
#define DYNAMICSTRINGARRAY_H

#include <vector>
#include <iostream>
#include <array>

using namespace std;
class DynamicStringArray
{
	//All private methods are declared here
private:
	T *dynamicArray ;
	int size;// to hold number of entries
	//All public  methods are declared here
public:
	DynamicStringArray();
	DynamicStringArray(const DynamicStringArray& copy);
	~DynamicStringArray();

//mutator functions and accesors are declared here
	int getSize();
	T getEntry(int input);
	bool deleteEntry(Tconst T& input);
	void addEntry(const T& input);
	

};
#endif

