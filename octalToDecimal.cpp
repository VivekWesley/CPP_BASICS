// octal to  decimal converssion.

// sample output:
// enter a value:
// 17
// 15

#include <iostream>
using namespace std;

int octalToDecimal(int n)
{
    int x = 1;
    int ans = 0;
    while (n > 0)
    {
        int lastDigiit = n % 10;
        ans += x * lastDigiit;
        x *= 8;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int n;

    cout << "enter a value: " << endl;
    cin >> n;
    cout << octalToDecimal(n) << endl;

    return 0;
}