// maximum subarray sum

//  sample output
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

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
                maxSum = max(maxSum, sum);
            }
        }
    }

    cout << maxSum << endl;
    return 0;
}