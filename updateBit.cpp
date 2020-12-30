#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    int clearedBit = (n & mask);
    return (clearedBit | (value << pos));
}

int main()
{
    int n, pos;
    cout << "enter a number: " << endl;
    cin >> n;
    cout << "enter pos: " << endl;
    cin >> pos;

    int value;
    cout << "enter bit value to be set: " << endl;
    cin >> value;

    int ans = updateBit(n, pos, value);
    cout << "ans: " << ans << endl;

    return 0;
}