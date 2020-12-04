// pairsum problem

// sample output:
// enter array size:
// 8
// enter array elements:
// 2 4 7 11 14 16 20 21
// enter target pair sum:
// 31
// 3 6
// 1

#include <iostream>
using namespace std;

bool pairSum(int arr[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "enter target pair sum: " << endl;
    cin >> target;

    cout << pairSum(arr, n, target) << endl;

    return 0;
}