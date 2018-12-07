TestCar: TestCar.o Car.o
		g++ TestCar.o Car.o -o TestCar
TestCar.o: TestCar.cpp Car.h
		g++ -c TestCar.cpp
Car.o: Car.cpp Car.h
		g++ -c Car.cpp