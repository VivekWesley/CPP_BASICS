// arrays

// sample output;

// enter array size:
// 5
// enter array elements:
// 11 12 13 14 15
// 11 12 13 14 15

#include <iostream>
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

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}