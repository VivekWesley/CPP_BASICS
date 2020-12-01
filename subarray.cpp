// max subarrays

// sample output:
// enter array size:
// 4
// enter array elements:
// -1 4 7 2
// -1
// -1 4
// -1 4 7
// -1 4 7 2
// 4
// 4 7
// 4 7 2
// 7
// 7 2
// 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    int a[n];

    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}