// clear a bit at given pos.

// sample output:
// 2

#include <iostream>
using namespace std;

int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}
int main()
{
    cout << clearBit(3, 0);

    return 0;
}