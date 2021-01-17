// reverse a given string using recursion
// sample output:
// k
// e
// v
// i
// v

#include <iostream>
#include <string.h>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0] << endl;
}

int main()
{
    string s = "vivek";
    reverse(s);

    return 0;
}