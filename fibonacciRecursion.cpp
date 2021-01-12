// find nth fibo number using recursion

// sample ouput:
// enter a number:
// 6
// ans: 8

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << "ans: " << fibonacci(n) << endl;
    return 0;
}