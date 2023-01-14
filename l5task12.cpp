#include <iostream>
using namespace std;
main()
{
    int userdata;
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int sum;
    cout << "Enter 5 digits only : ";
    cin >> userdata;
    num1 = userdata % 10;
    userdata = userdata / 10;
    num2 = userdata % 10;
    userdata = userdata / 10;
    num3 = userdata % 10;
    userdata = userdata / 10;
    num4 = userdata % 10;
    userdata = userdata / 10;
    num5 = userdata % 10;
    userdata = userdata / 10;
    sum = num1 + num2 + num3 + num4 + num5;
    cout << "sum:";
    if (sum % 2 == 0)
    {
        cout << "Evenish ";
    }
    else
    {
        cout << "Oddish";
    }
}
