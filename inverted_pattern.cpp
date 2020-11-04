// inverted pattern

// SAMPLE OUTPUT:
//enter a number
// 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <Iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}