// pass by value
// value will not change since int a is a local var in increment().

// sample output:
// a= 2

#include <iostream>
using namespace std;

void increment(int a)
{
    a++;
};

int main()
{
    int a = 2;
    increment(a);

    cout << "a= " << a << endl;

    return 0;
}