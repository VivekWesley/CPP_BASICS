// find 2 unique numbers from the array using bit manipulation

// sample output:
// 1 2 3 1 2 3 5 7
// 7
// 5

#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    int tempXor = xorSum;

    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }

    int newXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newXor = newXor ^ arr[i];
        }
    }

    cout << newXor << endl;
    cout << (tempXor ^ newXor) << endl;
}

int main()
{
    int n;
    cout << "enter array size" << endl;
    cin >> n;
    int arr[n];

    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unique(arr, n);

    return 0;
}