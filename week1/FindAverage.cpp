


#include <iostream>
#include <iomanip>
using namespace std;


double average(const double num[] , int size);
double average(const int num[] , int size);

int main()
{
   double arr[8]={2.4,7.5,7.5,4.9,2.3,3.1,1.9,6.3};	//test case for double
   int arr1[10]={1,2,3,4,5};	//test case for integer array
     cout << "test case 1: "<< average(arr,8) << endl;
  
   cout << "test case 2: "<<average(arr1,5) << endl;
  
   
   return 0;
   }
   
   
   
double average(const double num[] , int size){
   double total=0, avg=0; // initialize total and average as double
   for (int i=0;i< size;i++){
      total= total+ num[i];//add up all the numbers
      }
      avg=total/size;// calculate the average 
      return avg; //return the average 
   }
   
   
double average(const int num[] , int size){
   double total=0;	
   double avg=0;//initialize average as double cause the average will differ
   for (int i=0;i< size;i++){
      total= total+ num[i];
      }
      avg=total/size;// calculate the average 
      return avg;//return the average 
   
   }
   
