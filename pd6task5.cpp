#include <iostream>
using namespace std;
int main()
{
    float price;
    string day;
    cout << "enter your day...";
    cin >> day;
    string fruit;
    cout << "enter th fruit you buy...";
    cin >> fruit;
    float quantity;
    cout << "enter the quantity you have bought...";
    cin >> quantity;
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "apple")
        {
            price = 1.20 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "orange")
        {
            price = 0.85 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "grapes")
        {
            price = 3.85 * quantity;
            cout << "your price is..." << price;
        }
    }
    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "apple")
        {
            price = 1.25 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "orange")
        {
            price = 0.90 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
            cout << "your price is..." << price;
        }
        if (fruit == "grapes")
        {
            price = 4.20 * quantity;
            cout << "your price is..." << price;
        }
    }
    else
    {
        cout << "error";
    }
    return 0;
}