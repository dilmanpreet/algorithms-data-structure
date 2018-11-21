//
//  TestDynamicArray.cpp
//  lab6_1
//

#include <stdio.h>
#include "DynamicArray.h"

int main(){
    DynamicStringArray<string> arr;
    //adding strings
    arr.addEntry("Dilmanpreet");
    arr.addEntry("heello");
    arr.addEntry("yessss");
    cout << "Array after adding some strings:" << endl;
    for(int i = 1; i <= arr.getSize(); i++){
        cout << arr.getEntry(i) << endl;
    }
    cout <<endl;
    string element = arr.getEntry(2);
    cout << "The string to look for: " << element << endl;
    
    // delete the string
    arr.deleteEntry("heelo");
    
    cout << "Array after deleting:" << endl;
    for(int i = 1; i <= arr.getSize(); i++){
        cout << arr .getEntry(i) << endl;
    }
    cout <<endl;
    cout <<"The size of the array: " << arr.getSize() << endl;
    
    //using copy constructor
    
    
      DynamicStringArray<string> arr2(arr);

    cout << "After adding copy constructor: " << endl;
    for(int i = 1; i <= arr2.getSize(); i++){
        cout << arr2.getEntry(i) << endl;
    }
     cout <<endl;
    //Testing integer array
    DynamicStringArray<int> arrInt;
    //adding strings
    arrInt.addEntry(3);
    arrInt.addEntry(4);
    arrInt.addEntry(5);
    
    cout << "Array after adding new integer values: " << endl;
    for(int i = 1; i <= arrInt.getSize(); i++){
        cout << arrInt.getEntry(i) << endl;
    }
     cout <<endl;
    int element_1 = arrInt.getEntry(2);
    cout << "The integer to look for: " << element_1 << endl;
     cout <<endl;
    // delete the string
    arrInt.deleteEntry(4);
    cout << "Array after deleting:" << endl;
    for(int i = 1; i <= arrInt.getSize(); i++){
        cout << arrInt.getEntry(i) << endl;
    }
     cout <<endl;
    cout <<"The size of the array: " << arrInt.getSize() << endl;
    //using copy constructor
    DynamicStringArray<int> arrInt2(arrInt);
    
    cout << "After adding copy constructor: " << endl;
    for(int i = 1; i <= arrInt2.getSize(); i++){
        cout << arrInt2 .getEntry(i) << endl;
    }
    
     cout <<endl;
    
    return 0;
}
