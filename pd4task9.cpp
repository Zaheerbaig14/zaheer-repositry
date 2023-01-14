#include<iostream>
using namespace std;
void Number(string number1 );
main()
{
  while(true)
 { 
    string number1;
     cout<<"Enter True or false:";
     cin>>number1;
 
      Number(number1);
  }
}
void Number(string number1 )
 {
  if(number1=="false")
 {
    cout<<"True"<<endl;
 }
 if(number1=="true")
 {

    cout<<"False"<<endl;
 }

 } 