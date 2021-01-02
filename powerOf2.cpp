// check whether the given nummber is power of 2 or not

// sample output:
// enter a number:
// 16
// 1

#include <iostream>
using namespace std;

int isPowerOf2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    cout << isPowerOf2(n);

    return 0;
}