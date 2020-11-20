// find max no and min no from an array of elements.

// sample output:
// enter array size:
// 5
// enter array elements:
// 20 12 66 10 50
// max no: 66
// min no: 10

#include <iostream>
#include <climits>
using namespace std;

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

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "max no: " << maxNo << endl;
    cout << "min no: " << minNo << endl;

    return 0;
}