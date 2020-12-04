// pair sum problem optimized with O(n) time complexity.

// sample output:
// enter array size:
// 8
// enter array elements:
// 2 4 7 11 14 16 20 21
// enter target sum:
// 31
// 3 6
// 1

#include <iostream>
using namespace std;

bool pairSum(int arr[], int n, int target)
{
    int L = 0;
    int R = n - 1;
    while (L < R)
    {
        int currentValue = arr[L] + arr[R];
        if (currentValue == target)
        {
            cout << L << " " << R << endl;
            return true;
        }
        else if (currentValue > target)
        {
            R -= 1;
        }
        else
        {
            L += 1;
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
    cout << "enter target sum: " << endl;
    cin >> target;

    cout << pairSum(arr, n, target) << endl;

    return 0;
}