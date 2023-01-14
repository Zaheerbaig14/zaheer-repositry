#include <iostream>
using namespace std;
int main()
{
    int days;
    string month;
    cout << "enter your days of stay...";
    cin >> days;
    cout << "enter your month...";
    cin >> month;
    if (month == "may" || month == "october")
    {
        if (days >= 7 && days < 14)
        {
            float discount1 = 50.0 * 0.05;
            cout << "studio:..." << discount1;
            float discount2 = 65.0 * 0.05;
            cout << "apartment:..." << discount2;
        }
        if (days >= 14)
        {
            float discount1 = (50.0 - (50.0 * 0.3)) * days;
            cout << "studio:..." << discount1;
            float discount2 = (65.0 - (65 * 0.1)) * days;
            cout << "apartment:..." << discount2;
        }
    }
    if (month == "june" || month == "september")
    {
        if (days >= 7 && days < 14)
        {
            float discount1 = 75.20 * 0.05;
            cout << "studio:..." << discount1;
            float discount2 = 68.70 * 0.05;
            cout << "apartment:..." << discount2;
        }

        if (days >= 14)
        {
            float discount1 = (75.20 - (75.20 * 0.2)) * days;
            cout << "studio:..." << discount1;
            float discount2 = (68.70 - (68.70 * 0.1)) * days;
            cout << "apartment:..." << discount2;
        }
    }
    if (month == "july" || month == "august")
    {
        if (days >= 7 && days < 14)
        {
            float discount1 = 76 * 0.05;
            cout << "studio:..." << discount1;
            float discount2 = 77 * 0.05;
            cout << "apartment:..." << discount2;
        }

        if (days >= 14)
        {
            float discount1 = (76 - (75.20 * 0.2)) * days;
            cout << "studio:..." << discount1;
            float discount2 = (77 - (68.70 * 0.1)) * days;
            cout << "apartment:..." << discount2;
        }
    }
    return 0;
}