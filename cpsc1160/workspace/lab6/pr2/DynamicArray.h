#ifndef DYNAMICSTRINGARRAY_H
#define DYNAMICSTRINGARRAY_H

#include <vector>
#include <iostream>
#include <array>
using namespace std;

class DynamicStringArray{
	
	private:
    //INSTANCE VARIABLES
    int size;
    T* dynamicArray;
public :    
    // CONTRUCTORS
    DynamicStringArray();   
    
    DynamicStringArray(const DynamicStringArray& arrD );
    //DESTRUCTOR TO DELLOCATE MEMORY
    ~DynamicStringArray();
    //GIVES THE SIZE OF THE ARRAY
    int getSize();
    //PUSHING THE VALUES TO LAST INDEX IN THE ARRAY
    void addEntry(const T& str);
    //POPING THE LAST VALUE FROM THE ARRAY
    bool deleteEntry(const T& str);

    //GET THE VALUE FROM THE ARRAY
    T getEntry(int n);
    
    T* printArray();
    
    

};




#endif 
