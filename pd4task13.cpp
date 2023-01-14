#include<iostream>
using namespace std;
void Number(int workingday,int holiday,int holidayno);
main()
{
  while(true)
  { 
    int workingday=63;
    float holiday=127;
    int holidayno;
     cout<<"Enter number of holidays :";
     cin>>holidayno;
 
     Number(workingday,holiday,holidayno);
    }
}
void Number(int workingday,int holiday,int holidayno)
{
 int workingdayno;
  workingdayno=365-holidayno;
 float total;
  total=(holiday*holidayno) + (workingday*workingdayno);
 float totaltime;
  totaltime=(30000-total)/60;
  if(holidayno>=20)
   {
    cout<<"Tom sleep well hour:"<<totaltime<<endl;
   }  
  if(holidayno>113)
   {
    cout<<"Tom will run away hour:"<<totaltime<<endl;

   }
 

 } 