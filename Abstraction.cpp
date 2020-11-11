// Abstract class demo

#include <iostream>
using namespace std;

class Abstraction
{
private:
    int a;
    int b;

public:
    void setdData(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};

int main()
{
    Abstraction obja1;

    obja1.setdData(20, 40);
    obja1.display();

    return 0;
}