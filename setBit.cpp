// set bit 1 at given pos and return result.

//  sample output:
// 7

#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    cout << setBit(5, 1) << endl;

    return 0;
}