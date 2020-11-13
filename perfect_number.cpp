// problem statement:
// A number is considered perfect if its digits sum up to exactly 10.
// Given a positive integer n, return the n-th perfect number.
// For example, given 1, you should return 19. Given 2, you should return 28.

// sample output
// enter a value:
// 3
// 37

#include <iostream>
using namespace std;

int perfectsum(int n)
{
    int sum = 10 - n;
    sum = n * 10 + sum;
    return sum;
}

int main()
{
    int n;

    cout << "enter a value: " << endl;
    cin >> n;

    cout << perfectsum(n) << endl;

    return 0;
}