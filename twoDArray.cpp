// 2D array.

// sample output:
// enter no of rows and coloums for 2d array:
// 2 3
// enter array elements:
// 1 2 3 4 5 6
// 1 2 3
// 4 5 6

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter no of rows and coloums for 2d array: " << endl;
    cin >> n >> m;

    int arr[n][m];
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}