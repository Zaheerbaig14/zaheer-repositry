#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void maiz();
main()
{
 system("cls");
 maiz();
 while(true)
 {
    gotoxy(3,4);
 cout<<"p";
 }
}

void maiz()
 {
   cout<<"####################"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                  #"<<endl;
   cout<<"#                 #"<<endl;
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