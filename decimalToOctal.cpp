// decimal to octal conversion

// sample output
// enter a value:
// 100
// 144

#include <iostream>
using namespace std;

int decimalToOctal(int n)
{
    int ans = 0;
    int x = 1;

    while (x <= n)
        x *= 8;
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

int main()
{
    int n;
    cout << "enter a value:" << endl;
    cin >> n;
    cout << decimalToOctal(n) << endl;

    return 0;
}