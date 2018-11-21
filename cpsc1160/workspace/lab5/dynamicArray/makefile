TestDynamicStringArray: TestDynamicStringArray.o DynamicStringArray.o
		g++ TestDynamicStringArray.o DynamicStringArray.o -o TestDynamicStringArray
TestDynamicStringArray.o: TestDynamicStringArray.cpp DynamicStringArray.h
		g++ -c TestDynamicStringArray.cpp
DynamicStringArray.o : DynamicStringArray.cpp DynamicStringArray.h
		g++ -c DynamicStringArray.cpp
