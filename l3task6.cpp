#include<iostream>
using namespace std;
main()
{
 int mb = 1024;
 int kb = 1024;
 int byt = 8;
 int userdata;
  cout<<"Enter megabyte:";
  cin>>userdata;
 int bit;
  bit = mb*kb*byt*userdata;
  cout<<"bits are : "<<bit<<endl;


}