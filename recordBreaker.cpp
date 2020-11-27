// no of record breaker days/elements

// enter array size:
// 8
// enter array elements:
// 1 2 0 7 2 0 2 2
// 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size:" << endl;
    cin >> n;

    int a[n + 1];
    a[n] = -1;

    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << ans << endl;

    return 0;
}