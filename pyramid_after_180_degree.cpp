// pattern program:

// sample OUTPUT:

// Enter a value:
// 5
//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a value: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}