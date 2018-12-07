// Checkbmi.cpp
// Made by Dilmanpreet Nandu
// Student ID: 100271865
// ver 2.0
// 11-09-2018

#include < iostream > 
#include < iomanip >
#include < ifstream >

using namespace std;

int main() {
  double weight;
  double height;
  double bmi;
  //read the weight
  cout << "enter weight (in kg)" << endl;
  cin >> weight;

  //read the height
  cout << "enter height (in m)" << endl;
  cin >> height;

  //calculate BMI
  bmi = weight / (height * height);

  cout << "Your bmi is  " << setprecision(2) << bmi << endl;

  if (bmi <= 20) {
    cout << "you are underweight" << endl;
  } else if (bmi >= 25) {
    cout << "you are overweight" << endl;
  } else {
    cout << "your bmi is normal" << endl;
  }

  return 0;
}