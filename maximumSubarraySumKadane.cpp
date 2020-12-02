// maximum subarray sum optimized approach using Kadane's algorithm.
// with time complexity O(n)

// sample output:
// enter array size:
// 5
// -1 4 -6 7 -4
// 7

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;
    return 0;
}