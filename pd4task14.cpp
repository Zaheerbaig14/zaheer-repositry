#include<iostream>
using namespace std;
void menu();
void agregate(string name,int matric,int Inter,int ecat);
void compare(string student1, int ecat1,string student2,int ecat2);
main()
{
 
 string name;
  cout<<"Enter your name :";
  cin>>name;
 int matric;
  cout<<"Enter your matric markas :";
  cin>>matric;
 int IRnter;
  cout<<"Enter your inter marks :";
  cin<<Inter;
 int ecat;
  cout<<"Enter your ecat marks : ";
  cin>>ecat;   
 string student1;
  cout<<"Enter your name student 1 :";
  cin<<student1;
 int ecat1;
  cout<<"Enter your ecat marks student1 : ";
  cin>>ecat1;   
 string student2;
  cout<<"Enter your name student 2 :";
  cin<<student2;
 int ecat2;
  cout<<"Enter your ecat marks student2 : ";
  cin>>ecat2;   
  menu();
 agregate(name,matric,Inter,ecat);
 compare(student1,ecat1,student2,ecat2);
}

void agregate(string name,int matric,int Inter,int ecat)
{ 
 float totalagg;
 totalagg=(matric*30/1100) + (Inter*30/550) + (ecat*40/400);
  cout<<"Agregate is :"<<totalagg<<endl;
}
 void compare(string student1, int ecat1,string student2,int ecat2)
{
 if(ecat1>ecat2)
   {
   cout<<"Student 1 get roll no 1";
    }
 if(ecat2>ecat1)
   {
   cout<<"Student 2 get roll no 1";
    }
}


void menu()
{
cout<<"Zaheer baig"<<endl;

}


