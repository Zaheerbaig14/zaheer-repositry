#include<iostream>
using namespace std;
void Number(int redrose,float whiterose,float tulips,int redroseno,int whiteroseno,int tulipsno);
main()
{
  while(true)
  { 
   int redrose=2;
   float whiterose=4.10;
   float tulips=2.50;
 int redroseno;
  cout<<"Enter number of red rose :";
  cin>>redroseno;
 int whiteroseno;
  cout<<"Enter number of white rose :";
  cin>>whiteroseno;
 int tulipsno;
  cout<<"Enter number of tulips rose :";
  cin>>tulipsno; 
  Number(redrose,whiterose,tulips,redroseno,whiteroseno,tulipsno);
  }
}
void Number(int redrose,float whiterose,float tulips,int redroseno,int whiteroseno,int tulipsno)
 {
 float total;
  total = (redrose*redroseno) + (whiterose*whiteroseno) + (tulips*tulipsno);
  if(total>200)
  {
    float discount;
     discount=total-(total*20/100);
     cout<<"Total payable amount after discount :"<<discount<<endl;

  }
  

 } 