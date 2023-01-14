#include<iostream>
using namespace std;
void add(int number1 , int number );
main()
{
 int number1;
  cout<<"Enter number 1";
  cin>>number1;
 int number2;
  cout<<"Enter number 2";
  cin>>number2;
 char operand;
  cout<<"Enter + , - , * , / :";
  cin>>operand;
  if(operand== '+')
    {
       add(number1 , number2)
    }
 add(number1 , number2 );
 
}
 void add(int number1 , int number2 )
  {
    add = number1 + number2;
    cout<<"sum is :"<<endl;

   }