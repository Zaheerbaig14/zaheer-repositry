#include<iostream>
using namespace std;
main()
{
 string name;
  cout<<"Enter your name :";
  cin>>name;   
 int mark1;
  cout<<"Enter subject 1 marks : ";
  cin>>mark1;
 int mark2;
  cout<<"Enter subject 2 marks : ";
  cin>>mark2;
 int mark3;
  cout<<"Enter subject 3 marks : ";
  cin>>mark3;
 int mark4;
  cout<<"Enter subject 4 marks : ";
  cin>>mark4;
 int mark5;
   cout<<"Enter subject 5 marks : ";
   cin>>mark5;
 float total;
   total = (mark1+mark2+mark3+mark4+mark5)*100/500;
   cout<<name;
   cout<<"your percentage is :"<<total;
   


}