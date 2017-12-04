#include <iostream>
#include <fstream>
#include  <iomanip>
using  namespace std;

int main()
{
   double weight;
   double height;
   double BMI;
   //read the weight
   cout << "enter weight (in kg)" << endl;
   cin >> weight;
   
   //read the height
   cout << "enter height (in m)" << endl;
   cin >> height;
   
   
   BMI=weight/(height*height);
   
   cout << "Your BMI is  " << setprecision(2) << BMI << endl;

   
   if(BMI<=20)
   {
      cout << "you are underweight" << endl;
      }
      
   else if(BMI>=25)
   {
      cout << "you are overweight" << endl;
      }
   else
   {
      cout << "your BMI is normal" << endl;
      }
   
   return 0;
   }
