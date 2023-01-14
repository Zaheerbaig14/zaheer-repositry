#include<iostream>
using namespace std;
void total(int number);
main()
{
 int number;
  cout<<"Enter a number:";
  cin>>number;
  total(number);
}
void total(int number)
 {
  if(number%2==0)
 {
    cout<<"Even"<<endl;
 }
 if(number%2!=0)
 {

    cout<<"Odd"<<endl;
 }

 } 