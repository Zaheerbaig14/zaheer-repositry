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

 while(true)
 {
 gotoxy(X-1,Y);
 cout<<" ";
 gotoxy(X,Y);
 cout<<"p";
 Sleep(200);
 }

}