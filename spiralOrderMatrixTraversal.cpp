// spiral order matrix traversal.

// sample output:
// enter 2D matrix dimension:
// 3 3
// enter matrix elements:
// 1 2 3
// 4 5 6
// 7 8 9
// 1 2 3 6 9 8 7 4 5

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter 2D matrix dimension: " << endl;
    cin >> n >> m;

    int arr[n][m];
    cout << "enter matrix elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowStart = 0;
    int rowEnd = n - 1;
    int colStart = 0;
    int colEnd = m - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int col = colStart; col <= colEnd; col++)
        {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;

        for (int col = colEnd; col >= colStart; col--)
        {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;

        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }

    return 0;
}