// given N value find total numbers which are divisible by A or B

// sample output:
// enter N value:
// 40
// enter A value:
// 5
// enter B value:
// 7
// ans: 12

#include <iostream>
using namespace std;

int inclusionExclusion(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);
    return c1 + c2 - c3;
}

int main()
{
    int n, a, b;
    cout << "enter N value: " << endl;
    cin >> n;

    cout << "enter A value: " << endl;
    cin >> a;

    cout << "enter B value:  " << endl;
    cin >> b;

    cout << "ans: " << inclusionExclusion(n, a, b) << endl;

    return 0;
}