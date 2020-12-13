// pointer arithmetic

// sample output:
// 0x61ff08
// 0x61ff0c

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptra = &a;

    cout << ptra << endl;

    ptra++;

    cout << ptra << endl;

    return 0;
}