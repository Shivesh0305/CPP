#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Your age: ";
    cin >> a;

    switch (a)
    {
    case 12:
        cout << "You are 12 years old";
        break;
    case 18:
        cout << "You are 18 years old";
        break;
    case 21:
        cout << "You are 21 years old";
        break;

    default:
        cout << "You are nothing";
        break;
    }
    return 0;
}