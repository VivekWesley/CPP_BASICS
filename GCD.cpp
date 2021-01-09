
// Euclid algorithm to find gcd of two numbers

// sample output:

// enter A value:
// 42
// enter B value:
// 24
// ans: 6

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "enter A value: " << endl;
    cin >> a;
    cout << "enter B value: " << endl;
    cin >> b;

    cout << "ans: " << gcd(a, b) << endl;

    return 0;
}