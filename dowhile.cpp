// do while loop executes at least once even if the condition is false in the first place.
// condition is evaluated at the end of the loop.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter a number: " << endl;
    cin >> n;
    do
    {
        cout << "enter a number: " << endl;
        cin >> n;
    } while (n >= 0);

    return 0;
}