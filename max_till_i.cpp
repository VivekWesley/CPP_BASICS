// max till i.

// sample output:
// enter array size:
// 6
// enter array element:
// 0 -9 1 3 -4 5
// 0
// 0
// 1
// 3
// 3
// 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    int mx = -199999;

    cout << "enter array size: " << endl;
    cin >> n;
    int arr[n];

    cout << "enter array element: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }

    return 0;
}