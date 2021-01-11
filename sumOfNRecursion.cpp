// sum of n numbers using recursion

// sample output:
// enter n value:
// 4
// ans: 10

// #1
#include <iostream>
using namespace std;

int sumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prevSum = sumOfN(n - 1);
    return n + prevSum;
}

int main()
{
    int n;
    cout << "enter n value: " << endl;
    cin >> n;

    cout << "ans: " << sumOfN(n) << endl;

    return 0;
}

// #2

#include <iostream>
using namespace std;

int sumOfNRecursion

int main()
{

    return 0;
}