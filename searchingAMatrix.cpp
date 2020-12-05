// searching a matrix

// sample output:
// enter 2D array dimension:
// 3 3
// enter array elements
// 1 2 3
// 4 5 6
// 7 8 9
// enter target element:
// 8
// found at index: 2 1

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter 2D array dimension: " << endl;
    cin >> n >> m;
    int arr[n][m];

    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "enter target element: " << endl;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "found at index: " << i << " " << j << endl;
            }
        }
    }
    cout << "-1" << endl;

    return 0;
}