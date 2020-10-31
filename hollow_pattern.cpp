// pattern program:

// sample OUTPUT:

// Enter row and col size
// 5 4
// * * * *
// *     *
// *     *
// *     *
// * * * *

#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter row and col size" << endl;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "* ";
            }
            else if (j == 1 || j == col)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}