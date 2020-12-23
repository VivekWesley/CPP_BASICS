// lower to uppercase string conversion

// sample output:
// 8BITZONKER

#include <iostream>
using namespace std;

int main()
{
    string s = "8bitZonker";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    cout << s << endl;

    return 0;
}