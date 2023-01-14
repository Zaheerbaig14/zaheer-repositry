#include<iostream>
using namespace std;
main()
{
int userdata;
int mod;
int mod1;
int mod2;
int mod3;
int add; 
cout<<"Enter 4 digit number :";
cin>>userdata;
mod=userdata%10;
userdata=userdata/10;
mod1=userdata%10;
userdata=userdata/10;
mod2=userdata%10;
userdata=userdata/10;
mod3=userdata%10;
userdata=userdata/10;
add=mod+mod1+mod2+mod3;
cout<<"Total : "<<add;

}

