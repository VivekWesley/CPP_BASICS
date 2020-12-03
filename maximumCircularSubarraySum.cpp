// mxaimum circular subarray sum

// sample output:
// enter array size:
// 7
// enter array elements:
// 4 -4 6 -6 10 -11 12
// 22

#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
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

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);
    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, n);

    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}