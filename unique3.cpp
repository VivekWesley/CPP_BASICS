// find a unique number in an array where all number except one, are present thrice.

// sample output:
// enter array size:
// 10
// enter array elements:
// 1 3 2 3 4 2 1 1 3 2
// ans: 4

#include <iostream>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
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

    int ans = unique(arr, n);
    cout << "ans: " << ans << endl;

    return 0;
}
