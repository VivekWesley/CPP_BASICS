// subarray with given sum

// sample output:
// enter array size:
// 5
// enter array elements:
// 1 2 3 7 5
// enter value for 's'
// 12
// 2 4

#include <iostream>
using namespace std;

int main()
{
    int n, s;

    cout << "enter array size: " << endl;
    cin >> n;
    int a[n];

    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter value for 's'" << endl;
    cin >> s;
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;

    return 0;
}