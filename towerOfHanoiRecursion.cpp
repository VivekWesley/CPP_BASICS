// simulate tower of hanoi

// sample output:

// Move from A to C
// Move from A to B
// Move from C to B
// Move from A to C
// Move from B to A
// Move from B to C
// Move from A to C

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}

int main()
{
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}