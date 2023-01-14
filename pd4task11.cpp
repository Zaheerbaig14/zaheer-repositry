#include<iostream>
using namespace std;
void car(int speed);
main()
{
 while(true)
  {
    int speed;
     cout<<"Enter speed : ";
     cin>>speed;

    car(speed);

  }
}
void car(int speed)
{
 if(speed>100)
  {
    cout<<"Halt...YOU WILL BE CHALLENGED"<<endl;
  }
 if(speed==100)
  {
    cout<<"Perfect! You're going good"<<endl;
  }
}