// display 100 natural numbers excluding numbers which are divisible by 3 and loop should terminate on reaching >= 70
// use 'continue and break jump statements to manipulate the flow of loop.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        if (i >= 70)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}