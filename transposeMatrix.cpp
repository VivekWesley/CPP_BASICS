// transpose matrix problem.

// sample output:
// enter N value:
// 3
// enter array elements:
// 1 2 3
// 4 5 6
// 7 8 9
// transposed array:
// 1 4 7
// 2 5 8
// 3 6 9

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "enter N value: " << endl;
    cin >> N;

    int arr[N][N];
    cout << "enter array elements: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << "transposed array: " << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}