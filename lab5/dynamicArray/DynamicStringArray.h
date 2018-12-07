#ifndef DYNAMICSTRINGARRAY_H
#define DYNAMICSTRINGARRAY_H

#include<string>

using namespace std;
class DynamicStringArray
{
	//All private methods are declared here
private:
	string *dynamicArray ;
	int size;// to hold number of entries
	//All public  methods are declared here
public:
	DynamicStringArray();
	DynamicStringArray(const DynamicStringArray& );
	~DynamicStringArray();

//mutator functions and accesors are declared here
	int getSize();
	string getEntry(int input);
	bool deleteEntry(string inpu);
	void addEntry(string input);
	

};
#endif

