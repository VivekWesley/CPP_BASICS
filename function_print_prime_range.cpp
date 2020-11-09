// function to print prime range

// sample output:
// pick a starting point
// 10
// pick ending point
// 20
// 11
// 13
// 17
// 19

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    int b;
    cout << "pick a starting point" << endl;
    cin >> a;
    cout << "pick ending point" << endl;
    cin >> b;

    for (int i = a; i < b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}