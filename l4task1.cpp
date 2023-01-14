#include<iostream>
using namespace std;
void sum();
main()
{
 
 sum();
 sum();
}
 void sum()
 {
   int number1;
   int number2;
   int sum;
    cout<<"Enter number 1:";
    cin>>number1;
    cout<<"Enter number 2:";
    cin>>number2;
    sum = number1 + number2;
    cout<<"Sum is"<<sum<<endl;

 }