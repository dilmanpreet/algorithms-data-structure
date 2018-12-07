{"filter":false,"title":"DynamicStringArray.cpp","tooltip":"/lab5/dynamicArray/DynamicStringArray.cpp","undoManager":{"mark":2,"position":2,"stack":[[{"start":{"row":0,"column":0},"end":{"row":101,"column":0},"action":"insert","lines":["// Author : Dilmanpreet nandu","// date: 11 october 2017"," "," #include \"DynamicStringArray.h\"","#include <string>","#include <sstream>","","using namespace std;","","//empty constructor","DynamicStringArray::DynamicStringArray()","{","\tdynamicArray =NULL;","\tsize = 0;","}","//constructor with the values ","DynamicStringArray::DynamicStringArray(const DynamicStringArray &copy)","{","\t size = copy.size;","\t","\tdynamicArray = new string[size];","\t","\tfor (int i = 0; i < size; i++)","\t{","\t\tdynamicArray[i] = copy.dynamicArray[i];","\t}","}","","//member function that returns the size","int DynamicStringArray::getSize()","{","\treturn size;","}","//member function that adds a new entry ","void DynamicStringArray::addEntry(string input)","{","\t","\tstring* newArr = new string[ 1+size];","\t","\tfor (int i = 0; i < size;i++){","\t\tnewArr[i] = dynamicArray[i];","\t}","\t","\tnewArr[size] = input;","\t","\tdelete[] dynamicArray;","\t","\tdynamicArray = newArr;","\tsize++;","","}","//member function that used to delete the given entry","bool DynamicStringArray::deleteEntry(string input)","{","\t//finding the index of input","\tint index = -1;","\tfor (int i = 0; i < size; i++)","\t{","\t\tif (dynamicArray[i] == input)","\t\t\tindex = i;","\t}","\t","\tif (index == -1)","\t\treturn false;","\t//c","\tstring* newArr = new string[size - 1];","\tfor (int i = 0,j = 0; i < size; i++){","\t\tif (i == index)","\t\t\tindex = -1;","\t\telse {","\t\t\tnewArr[j] = dynamicArray[i];","\t\t\tj++;","\t\t}","\t}","\tdelete[]dynamicArray;","\tdynamicArray = newArr;","\tsize--;","\t","\treturn true;","}","//member function that returns the string at that index in dynamicArray or else index out of bounds","string DynamicStringArray::getEntry(int input)","{","\tif (input < size)","\t\treturn dynamicArray[input];","\telse {","\t\treturn \"Index is out of bounds.\";","\t\t","\t}","\t\t","}","//The destructor","DynamicStringArray::~DynamicStringArray()","{","\tdelete[]dynamicArray;","}","","","","","",""],"id":1}],[{"start":{"row":1,"column":23},"end":{"row":1,"column":24},"action":"remove","lines":["7"],"id":2}],[{"start":{"row":1,"column":23},"end":{"row":1,"column":24},"action":"insert","lines":["8"],"id":3}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":19,"column":1},"end":{"row":19,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1539671520310,"hash":"5831054414f61f8c4980826189cbcbe1acb8af55"}