// sum of n natural numbers using formula

// sample output:
// enter a value:
// 5
// 15

#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = n * (n + 1) / 2;
    return sum;
}
int main()
{
    int n;

    cout << "enter a value: " << endl;
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}