#include <iostream>
using namespace std;
void discount(string day, string month, int amount);
main()
{
    string day;
    cout << "Enter day :";
    cin >> day;
    string month;
    cout << "Enter month in alphabet :";
    cin >> month;
    int amount;
    cout << "Enter your total amount :";
    cin >> amount;
    discount(day, month, amount);
}
void discount(string day, string month, int amount)
{
    if (day == "sunday" || month == "october")
    {
        float total;
        total = amount - (amount * 10 / 100);
        cout << "your amount after discount for sunday October :" << total << endl;
    }
    else
    {
        cout << amount;
    }
}