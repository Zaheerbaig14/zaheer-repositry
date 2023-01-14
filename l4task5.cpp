#include<iostream>
using namespace std;
void Number(int number1 , int number2);
main()
{
  while(true)
  { 
 int number1;
  cout<<"Enter number 1:";
  cin>>number1;
 int number2;
  cout<<"Enter number 2:";
  cin>>number2;
  Number(number1 , number2);
  }
}
void Number(int number1 , int number2)
 {
  if(number1>number2)
 {
    cout<<"number 1 is greater"<<endl;
 }
 if(number2>number1)
 {

    cout<<"number 2 is greater"<<endl;
 }

 } 