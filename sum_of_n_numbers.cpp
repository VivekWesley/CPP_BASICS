// sum of first n natural numbers.

// sample output:
// enter a number:
// 5
// 15

#include <iostream>
using namespace std;

int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}