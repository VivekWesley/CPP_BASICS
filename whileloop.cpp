// takes input from user.
// negative number input terminates the loop.

#include <iostream>
using namespace std;

int main()
{
    int n;

    while (n >= 0)
    {
        cout << "enter a number" << endl;
        cin >> n;
    }
    cout << "loop ternminated at -ve number" << endl;

    return 0;
}