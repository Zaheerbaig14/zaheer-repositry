#include <iostream>
using namespace std;
int main()
{
    int day;
    string month;
    cout << "enter day...";
    cin >> day;
    cout << "enter month...";
    cin >> month;

    if (month == "march")
    {
        if (day >= 21 && day <= 31)
        {
            cout << "Aries";
        }
    }
    if (month == "april")
    {
        if ((day >= 1 && day <= 19))
        {
            cout << "Aries";
        }
    }
    if (month == "april")
    {
        if (day >= 20 && day <= 30)
        {
            cout << "Taurus";
        }
    }
    if (month == "may")
    {
        if ((day >= 1 && day <= 20) || (day >= 21 && day <= 31))
        {
            cout << "Taurus";
        }
    }
    if (month == "may" || month == "june")
    {
        if ((day >= 21 && day <= 31) || (day >= 1 && day <= 20))
        {
            cout << "Gemini";
        }
    }
    if (month == "june" || month == "july")
    {
        if ((day >= 21 && day <= 30) || (day >= 1 && day <= 22))
        {
            cout << "Cancer";
        }
    }
    if (month == "july" || month == "august")
    {
        if ((day >= 1 && day <= 23) || (day >= 1 && day <= 22))
        {
            cout << "Leo";
        }
    }
    if (month == "august" || month == "september")
    {
        if ((day >= 1 && day <= 23) || (day >= 1 && day <= 22))
        {
            cout << "Virgo";
        }
    }
    if (month == "september" || month == "october")
    {
        if ((day >= 1 && day <= 23) || (day >= 1 && day <= 22))
        {
            cout << "Libra";
        }
    }
    if (month == "october" || month == "november")
    {
        if ((day >= 23 && day <= 31) || (day >= 1 && day <= 21))
        {
            cout << "Scorpio";
        }
    }
    if (month == "november" || month == "december")
    {
        if ((day >= 22 && day <= 30) || (day >= 21 && day <= 31))
        {
            cout << "Sagittarius";
        }
    }
    if (month == "december" || month == "january")
    {
        if ((day >= 22 && day <= 31) || (day >= 1 && day <= 19))
        {
            cout << "Capricorn";
        }
    }
    if (month == "january" || month == "febuary")
    {
        if ((day >= 20 && day <= 31) || (day >= 1 && day <= 18))
        {
            cout << "Aquarius";
        }
    }
    if (month == "febury" || month == "march")
    {
        if ((day >= 19 && day <= 28) || (day >= 1 && day <= 20))
        {
            cout << "Pisces";
        }
    }
    return 0;
}