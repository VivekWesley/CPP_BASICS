// use of jump statement "break".
// program to check whether the given number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;

    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "prime" << endl;
    }

    return 0;
}
