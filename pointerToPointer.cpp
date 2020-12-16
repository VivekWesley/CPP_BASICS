// pointer to pointer.

// sample output:
// enter a value:
// 10
// a= 10
// ptra= 0x61ff08
// *ptra= 10
// ptrp= 0x61ff04
// *ptrp= 0x61ff08
// **ptrp= 10

#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "enter a value: " << endl;
    cin >> a;

    cout << "a= " << a << endl;

    int *ptra = &a;
    cout << "ptra= " << ptra << endl;
    cout << "*ptra= " << *ptra << endl;

    int **ptrp = &ptra;
    cout << "ptrp= " << ptrp << endl;
    cout << "*ptrp= " << *ptrp << endl;
    cout << "**ptrp= " << **ptrp << endl;

    return 0;
}