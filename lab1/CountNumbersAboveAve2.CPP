// Made by Dilmanpreet Nandu
// Student ID: 100271865
// ver 1.0
// 17-09-2018

#include <iostream>
#include <iomanip>
#include <ctime> // for time function
#include <cstdlib> // for rand  functions
#include <fstream> // for input output file

  using namespace std;
int main() {
 
  srand(time(0));
	
  //int number1 = rand() % 100;
  // int number2 = rand() % 100;
	
  //  Save in an output file
  ofstream output;
  output.open("numbers.txt");

	 // Generate 10 random whole numbers between 0 and 100
  for (int i = 0; i < 10; i++) {

    int number1 = rand() % 100;
    output << number1 << endl;
  }

  output.close();
  // Read the numbers back write the average first and then the numbers 
  ifstream input;

  input.open("numbers.txt");
  int count = 0, sum = 0;
int x;
  while (input >> x) {
    sum = sum + x;
    count++;
  }

  //  get average
  int average = sum / count;
  input.close();
  //write the numbers that are above average

  ifstream print;

  cout << "the average for the numbers is :" <<average<< endl;
  int aboveAvv=0;

  print.open("numbers.txt");
double y;
  while (print >> y) {

    cout << y << endl;

    if (y > average)
      aboveAvv++;
     }

  cout << " number of numbers above average is " << aboveAvv<<endl;

  print.close();
  return 0;
}