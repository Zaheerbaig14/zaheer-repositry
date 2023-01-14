#include<iostream>
using namespace std;
void Number(string day , int purchase);
main()
{
 string day;
  cout<<"Enter Day:";
  cin>>day;
 int purchase;
  cout<<"Enter total purchase amount:";
  cin>>purchase;
  Number(day , purchase);
}
void Number(string day , int purchase)
 {
  if(day=="sunday")
  {
     int amount;
     amount = purchase - (purchase*10/100);
     cout<<"Your total amount :"<<amount<<endl;
   }
 }