// factorial of n

// SAMPLE OUTPUT:
// enter a number:
// 4
// 24

#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;

    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;

    return 0;
}