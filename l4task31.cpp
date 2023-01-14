#include<iostream>
using namespace std;
void add(int number1 , int number2 );
void subtract(int number1 , int number2);
void multiply(int number1 , int number2);
void divide(int number1 , int number2);
main()
{
 int number1;
  cout<<"Enter number 1:";
  cin>>number1;
 int number2;
  cout<<"Enter number 2:";
  cin>>number2;
 char operand;
  cout<<"Enter + , - , * , / :";
  cin>>operand;
  if(operand== '+')
    {
       add(number1 , number2);
    }
   if(operand== '-')
   {
     subtract(number1 , number2);
   } 
    if(operand== '*')
   {
     multiply(number1 , number2);
   } 
   if(operand== '/')
   {
     divide(number1 , number2);
   } 
}
 void add(int number1 , int number2 )
 
  {
     int sum;
      sum = number1 + number2;
      cout<<"sum is :"<<sum<<endl;
    } 
     void subtract(int number1 , int number2)
     {
     int subtract;
      subtract = number1 - number2;
      cout<<"subtraction is:"<<subtract<<endl;
    } 
     void multiply(int number1 , int number2)
     {
     int multiply;
      multiply = number1 * number2;
      cout<<"multiplication is:"<<multiply<<endl; 
     }
     void divide(int number1 , int number2)
     {  
        int divide;
     divide = number1 / number2;
     cout<<"division is:"<<divide<<endl; 
     }