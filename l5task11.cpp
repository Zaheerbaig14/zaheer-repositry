#include <iostream>
using namespace std;
void name(char letter);
main()
{
    char letter;
    cout << "Enter A or a : ";
    cin >> letter;

    name(letter);
}
void name(char letter)
{
    if (letter == 'a')
    {
        cout << " you enter small : a";
    }
    if (letter == 'A')
    {
        cout << " you enter capital : A";
    }
}