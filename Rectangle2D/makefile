TestRectangle2D: TestRectangle2D.o Rectangle2D.o
	g++ TestRectangle2D.o Rectangle2D.o -o TestRectangle2D
TestRectangle2D.o: TestRectangle2D.cpp Rectangle2D.h
	g++ -c TestRectangle2D.cpp
Rectangle2D.o: Rectangle2D.cpp Rectangle2D.h
	g++ -c Rectangle2D.cpp