#include<iostream>
using namespace std;
main()
{
 while(true){
 int number;
  cout<<"Enter number  :";
  cin>>number;
 
 if(number<50)
 {
  cout<<"Grade = F "<<endl;
 }
else if(number >=50)
 if(number<=60)
 {
  cout<<" Grade = E"<<endl;
 }
 if(number >=61)
 if(number<=70)
 {
  cout<<" Grade = D"<<endl;
 }
 if(number >=71)
 if(number<=80)
 {
  cout<<" Grade = C"<<endl;
 }
 if(number >=81)
 if(number<=85)
 {
  cout<<" Grade = B"<<endl;
 }
else
 {
  cout<<" Grade = A"<<endl;
 }
 

}
}


