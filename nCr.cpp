// binomial coefficient nCr:

// sample output:
// enter 'n' value:
// 5
// enter 'r' value
// 3
// 10

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
    int r;
    cout << "enter 'n' value: " << endl;
    cin >> n;
    cout << "enter 'r' value" << endl;
    cin >> r;
    int ans = fact(n) / (fact(n - r) * fact(r));
    cout << ans << endl;

    return 0;
}