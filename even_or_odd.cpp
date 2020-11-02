// Program to check whether the given number is even or odd.

// SAMPLE OUTPUT:
// enter a number
// 5
// 5 is Odd
// enter a number
// 8
// 8 is Even

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " is Even" << endl;
    }
    else
    {
        cout << a << " is Odd " << endl;
    }

    return 0;
}