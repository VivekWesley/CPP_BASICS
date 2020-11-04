// print Rhombus

//SAMPLE OUTPUT:
// enter a number:
// 5
//      * * * * *
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}