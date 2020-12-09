// matrix search optimized

// sample output:
// enter 2D array dimension:
// 3 3
// enter 2D array elements:
// 1 2 3
// 4 5 6
// 7 8 9
// enter target element:
// 8
// element found

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter 2D array dimension: " << endl;
    cin >> n >> m;
    int m1[n][m];

    cout << "enter 2D array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> m1[i][j];
    }

    int target;
    cout << "enter target element: " << endl;
    cin >> target;

    int r = 0;
    int c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (m1[r][c] == target)
        {
            found = true;
        }
        if (m1[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element doesn't exist" << endl;
    }
    return 0;
}