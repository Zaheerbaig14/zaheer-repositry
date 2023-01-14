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
    if (day == "sunday" && month == "october", "march", "august")
    {
        float total1;
        total1 = amount - (amount * 10 / 100);
        cout << "your amount after discount for sunday October,march august :" << total1 << endl;
    }
    else if (day == "monday" && month == "november", "december")
    {
        float total2;
        total2 = amount - (amount * 5 / 100);
        cout << "your amount after discount for monday November,December :" << total2 << endl;
    }
}