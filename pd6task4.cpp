#include <iostream>
using namespace std;
void customertotal(char customer, string calltime, int minutes);
main()
{
    char customer;
    cout << "Which type of customer are you residential(r) or premier(p)";
    cin >> customer;
    string calltime;
    cout << "Press D for day and N for night ";
    cin >> calltime;
    int minutes;
    cout << "Enter your minutes you have used :";
    cin >> minutes;
    customertotal(customer, calltime, minutes);
}
void customertotal(char customer, string calltime, int minutes)
{
    if (customer == 'r' && minutes <= 50)
    {
        cout << "Charges are : 10$";
    }
    if (customer == 'r' && minutes > 50)
    {
        int extra1;
        extra1 = (minutes - 50) * 0.20;
        int extra2 = 10;
        int totalextra;
        totalextra = extra1 + extra2;
        cout << "Your charges are : " << totalextra;
    }
    if (customer == 'p' && minutes <= 75 && calltime == "Day")
    {
        cout << "Charges are : 25$";
    }
    if (customer == 'p' && minutes <= 100 && calltime == "Night")
    {
        cout << "Charges are : 25$";
    }
    if (customer == 'p' && minutes > 75 && calltime == "Day")
    {
        int extra1;
        extra1 = (minutes - 75) * 0.10;
        int extra2 = 75;
        int totalextra;
        totalextra = extra1 + extra2;
        cout << "Your charges are : " << totalextra;
    }
    if (customer == 'p' && minutes > 100 && calltime == "Night")
    {
        int extra1;
        extra1 = (minutes - 100) * 0.05;
        int extra2 = 100;
        int totalextra;
        totalextra = extra1 + extra2;
        cout << "Your charges are : " << totalextra;
    }
}