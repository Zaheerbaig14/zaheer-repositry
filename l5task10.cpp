#include<iostream>
using namespace std;
void sum(int number);
main()
{
 int number;
  cout<<"Enter number :";
  cin>>number;   
 sum(number);
}
void sum(int number)
{
 int add;
  add = number * 5 ;
  cout<<"your answer is :"<<add<<endl;


}

