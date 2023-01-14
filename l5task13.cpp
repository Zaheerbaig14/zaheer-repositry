#include <iostream>
using namespace std;
main() int hour;
cout << "Enter hour (1-23) :";
cin >> hour;
int minutes;
cout << "Enter minutes (1-59) :";
cin >> minutes;
int minplus;
minplus = minutes + 15;
if (hour <= 23)
{
    cout << hour << ":" << minplus;
}