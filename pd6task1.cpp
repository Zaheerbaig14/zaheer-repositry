#include <iostream>
using namespace std;
void total(string temperature, string humidity);
main()
{
    string temperature;
    cout << "Is temperature is hot or cold:";
    cin >> temperature;
    string humidity;
    cout << "Is humidity dry or humid :";
    cin >> humidity;
    total(temperature, humidity);
}
void total(string temperature, string humidity)
{
    string activity;
    if (temperature == "warm" && humidity == "dry")
        cout << "Play Teniss";
    else if (temperature == "warm" && humidity == "humid")
        cout << "Swim";
    else if (temperature == "cold" && humidity == "dry")
        cout << "Play Basketball";
    else if (temperature == "cold" && humidity == "humid")
        cout << "Play Teniss";
}