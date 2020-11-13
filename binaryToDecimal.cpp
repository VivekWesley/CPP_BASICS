// binary to decimal  conversion.

// sample output:
// enter a number:
// 101
// 5

#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += x * lastDigit;
        x *= 2;
        n = n / 10;
    }
    return ans;
}
int main()
{

    int n;

    cout << "enter a number: " << endl;
    cin >> n;

    cout << binaryToDecimal(n) << endl;

    return 0;
}