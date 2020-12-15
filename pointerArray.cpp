// pointer array manipulation

// sample output:
// output: 1
// 10
// output 2:
// 0x61fef8
// 0x61fefc
// 0x61ff00
// output 3:
// 10
// 20
// 30

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};

    cout << "output: 1" << endl;
    cout << *arr << endl;

    int *ptra = arr;

    cout << "output 2:  " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << ptra << endl;
        ptra++;
    }

    cout << "output 3:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
    }

    return 0;
}