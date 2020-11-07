// prime or non prime no.

// SAMPLE OUTPUT 1:
// enter a number:
// 75
// non-prime

// SAMPLE OUTPUT 2:
// enter a number:
// 23
// prime
// _________________

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int flag = 0;
    cout << "enter a number: " << endl;
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
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