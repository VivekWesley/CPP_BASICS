// print prime or non prime

// SAMPLE OUTPUT 1:
// enter a number:
// 15
// non-prime

// SAMPLE OUTPUT 2:
// enter a number:
// 3
// prime

#include <iostream>
using namespace std;

int main()
{
    int n;
    int flag = 0;

    cout << "enter a number: " << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "non-prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    }

    return 0;
}