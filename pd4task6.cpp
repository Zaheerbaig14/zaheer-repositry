 #include<iostream>
 #include<windows.h>
 using namespace std;
 void gotoxy(int X,int Y);
 main()
{  
 system("cls");
 gotoxy(15,15);
 cout<<"A";
 gotoxy(15,16);
 cout<<"W";
 gotoxy(15,17);
 cout<<"A";
 gotoxy(15,18);
 cout<<"I";
 gotoxy(15,19);
 cout<<"S";

}


void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
