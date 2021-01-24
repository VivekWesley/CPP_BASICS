// generate all subsequence of given string along with it's ASCII code.

// sample output:
// B
// 66
// A
// AB
// A66
// 65
// 65B
// 6566

#include <iostream>
using namespace std;

void subseqAscii(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseqAscii(ros, ans);
    subseqAscii(ros, ans + ch);
    subseqAscii(ros, ans + to_string(code));
}

int main()
{
    subseqAscii("AB", "");
    return 0;
}