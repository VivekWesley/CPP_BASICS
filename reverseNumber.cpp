// reverse a number

//SAMPLE OUTPUT:
// enter a number:
// 1234
// 4321

#include <iostream>
using namespace std;

int main()
{
    int n;
    int reverse = 0;
    cout << "enter a number: " << endl;
    cin >> n;
    while (n > 0)
    {
        int lastdigit;
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }

    cout << reverse << endl;

    return 0;
}