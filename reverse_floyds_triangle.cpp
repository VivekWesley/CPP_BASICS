// reverse floyd's triangle

// SAMPLE OUTPUT:
// enter a number:
// 4
// 10 9 8 7
// 6 5 4
// 3 2
// 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    int count = n * (n + 1) / 2;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }

    return 0;
}