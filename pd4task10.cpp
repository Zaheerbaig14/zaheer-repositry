#include<iostream>
using namespace std;
void Number(string country , int price);
main()
{
  while(true)
  { 
 string country;
  cout<<"Enter country name : ";
  cin>>country;
 int price;
  cout<<"Enter ticket price in dollar : ";
  cin>>price;
  Number(country , price);
  }
}
void Number(string country , int price)
 {
  if(country=="pakistan")
 {
    price = price - (price*5/100);
    cout<<"price for pakistani ticket:"<<price<<endl;
 }
  if(country=="irland")
  {
    price = price - (price*10/100);
    cout<<"price for Irland ticket:"<<price<<endl;
   }
  if(country=="india")
 {
    price = price - (price*20/100);
    cout<<"price for India ticket:"<<price<<endl;
 }
  if(country=="england")
 {
    price = price - (price*30/100);
    cout<<"price for England ticket:"<<price<<endl;
 } 
  if(country=="canada")
 {
    price = price - (price*45/100);
    cout<<"price for canada ticket:"<<price<<endl;
 }  
 } 