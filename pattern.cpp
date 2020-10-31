// pattern program:

// sample OUTPUT:

// enter no of rows
// 5
// Enter no of cols
// 5
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "enter no of rows" << endl;
    cin >> row;
    cout << "Enter no of cols" << endl;
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
