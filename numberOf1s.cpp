// count the number of 1s  in binary representation of a number

// sample output:
// enter a number:
// 19
// ans: 3

#include <iostream>
using namespace std;

int numberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "enter a number:" << endl;
    cin >> n;
    int ans = numberOfOnes(n);
    cout << "ans: " << ans << endl;

    return 0;
}