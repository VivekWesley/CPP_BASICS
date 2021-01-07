// print prime numbers till n using seive of Eratosthenes principle.

// sample output:
// enter n value:
// 30
// prime numbers:
// 2 3 5 7 11 13 17 19 23 29

#include <iostream>
using namespace std;

void primeSeive(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    int n;
    cout << "enter n value: " << endl;
    cin >> n;

    cout << "prime numbers: " << endl;
    primeSeive(n);

    return 0;
}
