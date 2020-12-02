// maximum subarray sum cumulative approach.
// time complexity O(n^2)

// sample output:
// enter array size:
// 4
// enter array elements:
// -1 4 7 2
// 13

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;

    int a[n];

    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int currentSum[n + 1];
    currentSum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currentSum[i] = currentSum[i - 1] + a[i - 1];
    }

    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currentSum[i] - currentSum[j];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}