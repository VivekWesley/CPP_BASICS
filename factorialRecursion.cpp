// find factorial of n using recursion

// sample output :
// enter a nummber:
// 4
// ans: 24

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "enter a nummber: " << endl;
    cin >> n;
    cout << "ans: " << factorial(n) << endl;

    return 0;
}