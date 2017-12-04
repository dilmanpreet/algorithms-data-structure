TestRectangle: TestRectangle.o Rectangle.o
	g++ TestRectangle.o Rectangle.o -o TestRectangle
TestRectangle.o: TestRectangle.cpp Rectangle.h
	g++ -c TestRectangle.cpp
Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp
