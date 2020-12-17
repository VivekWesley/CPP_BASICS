// pass by reference using pointer var.

// sample output:
// a= 2
// b =8
// a: 8
// b: 2

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 8;

    cout << "a= " << a << endl;
    cout << "b =" << b << endl;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}