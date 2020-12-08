// matrix multiplication.

// sample output:
// enter n1, n2 and n3 value:
// 3 4 3
// enter m1 matrix elements:
// 2 4 1 2
// 8 4 3 6
// 1 7 9 5
// enter m2 matrix elements:
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 6
// 33 42 51
// 69 90 111
// 112 134 156

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "enter n1, n2 and n3 value: " << endl;
    cin >> n1 >> n2 >> n3;

    int m1[n1][n2];
    int m2[n2][n3];

    cout << "enter m1 matrix elements: " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> m1[i][j];
    }

    cout << "enter m2 matrix elements: " << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
            cin >> m2[i][j];
    }

    //initializing ans matrix with zeros
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            ans[i][j] = 0;
    }

    //multiply
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    //output:
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}