// insertion sort:

// sample output:
// enter array size
// 4
// enter array elements
// 8 2 1 5
// 1 2 5 8

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size" << endl;
    cin >> n;
    int arr[n];

    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}