#include<iostream>
 #include<windows.h>
 using namespace std;
 void gotoxy(int,int);
 void maiz();
 void move(int X, int Y);
 main()
{
   system("cls");
    maiz();
    int X=5;
    int Y=5;
   
 while(true)
 {
 move(X,Y);
 if(Y<10)
  {
    Y= Y+1;
  }
 if(Y<1)
  {
    Y= Y+1;
  }
 
 if(Y==10)
  {
   gotoxy(X,Y-1);
    cout<<" ";
    Y=2;
  }
 }
}
 
void maiz()
{
  cout<<"##########################"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"#                        #"<<endl;
  cout<<"##########################"<<endl;
}
void gotoxy(int x, int y)
 {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE
), coordinates);
}
void move(int X,int Y)
{
 gotoxy(X,Y-1);
 cout<<" ";
 gotoxy(X,Y);
 cout<<"p";
 Sleep(200);

}
