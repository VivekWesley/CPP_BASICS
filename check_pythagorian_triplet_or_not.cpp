// check pythagorian triplet or not.

// sample output:
// enter 3 values:
// 3 4 5
// Pythagorian triplet

#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
        return true;
    else
        return false;
}

int main()
{

    int x, y, z;
    cout << "enter 3 values: " << endl;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "Pythagorian triplet" << endl;
    }
    else
    {
        cout << "Not a Pythagorian triplet" << endl;
    }

    return 0;
}