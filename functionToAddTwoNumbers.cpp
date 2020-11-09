// function to add two integer

// sample output:
// enter two values:
// 64
// 64
// 128

#include <iostream>
using namespace std;

int add(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int a, b;
    cout << "enter two values: " << endl;
    cin >> a >> b;
    cout << add(a, b) << endl;

    return 0;
}