// generate all substring of a string

// sample output:
// C
// B
// BC
// A
// AC
// AB
// ABC

#include <iostream>
using namespace std;

void substring(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    substring(ros, ans);
    substring(ros, ans + ch);
}

int main()
{
    substring("ABC", "");
    return 0;
}