
// pointers

// sample output :

// enter a value:
// 200
// a= 200
// ptra= 0x61ff08
// *ptra= 200

#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "enter a value: " << endl;
    cin >> a;

    int *ptra = &a;

    cout << "a= " << a << endl;
    cout << "ptra= " << ptra << endl;
    cout << "*ptra= " << *ptra << endl;

    return 0;
}