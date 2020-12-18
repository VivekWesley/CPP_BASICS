// dymanic memory allocation and deallocation using heap;

#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *p = new int(); // allocation
    *p = 10;
    delete (p); // deallocation

    p = new int[4]; // reusing pointer p;

    delete[] p; // deallocation array
    p = NULL;   // free the pointer to avoide memory Leak

    return 0;
}