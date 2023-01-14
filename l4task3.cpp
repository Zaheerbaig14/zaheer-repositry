#include<iostream>
using namespace std;
void sum(int number1 , int number2);
main()
{
 
 sum(12,24);
 sum(10,20);
}
 void sum(int number1 , int number2)
 {
   
   int sum;
    
    sum = number1 + number2;
    cout<<"Sum is:"<<sum<<endl;

 }