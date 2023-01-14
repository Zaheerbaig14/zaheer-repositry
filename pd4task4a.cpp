#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void maiz();
void move(int X ,int Y);

main()
{
 system("cls");
 maiz();
 int X=3;
 int Y=3;
while(true)
 {
   move(X,Y);
   if(Y<7)
    {
      Y= Y+1;
    
    }
   if(Y==7)
    {
      gotoxy(X,Y-1);
      cout<<" ";
      Y=3;
      
    }
  if(X<7)
    {
      X= X+1;
    
    }
   if(X==7)
    {
      gotoxy(X-1,Y);
      cout<<" ";
      X=3;
    
    }
  }

 move(X,Y);
}

void maiz()
 {
   cout<<"####################"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"####################"<<endl;
 }



void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void move(int X ,int Y)
{
gotoxy(X-1,Y);
cout<<" ";
gotoxy(X,Y);
cout<<"p";
Sleep(200);
}