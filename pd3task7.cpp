#include<iostream>
using namespace std;
main()
{
 string movie;
  cout<<"Enter movie name : ";
  cin>>movie;
 int adultprice;
  cout<<"Enter adult ticket price : ";
  cin>>adultprice;
 int childprice;
  cout<<"Enter child ticket price :";
  cin>>childprice;
 int adultsold;
  cout<<"Enter no of adult ticket sold :";
  cin>>adultsold;
 int childsold;
  cout<<"Enter no of child ticket sold :";
  cin>>childsold;
 float charity;
  cout<<"Enter donated percentage :";
  cin>>charity;
 float adultchild;
  adultchild = (adultprice*adultsold)+(childprice*childsold);
  cout<<"Total amount is :"<<adultchild<<endl;
 float total;
  total = adultchild - (adultchild*charity/100);
  cout<<"your amount after donation :"<<total<<endl;


}