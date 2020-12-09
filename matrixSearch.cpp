// matrix search (brute force approach linear search)

// enter 2D array dimension:
// 3 3
// enter elements:
// 1 2 3
// 4 5 6
// 7 8 9
// enter target element:
// 9
// target element is present in the matrix

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter 2D array dimension: " << endl;
    cin >> n >> m;

    int m1[n][m];
    cout << "enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> m1[i][j];
    }

    int target;
    cout << "enter target element: " << endl;
    cin >> target;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (m1[i][j] == target)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "target element doesn't exist in the matrix" << endl;
    }
    else
    {
        cout << "target element is present in the matrix" << endl;
    }
    return 0;
}