// basic string methods.

// sample output:
// 788
// 7862
// poop
// aacddfghiijklnnnnoppsssvv

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1 = "786";
    int x = stoi(s1);
    cout << x + 2 << endl;

    string s2 = to_string(x);
    cout << s2 + "2" << endl;

    string s3 = "nincompoop";
    string s4 = s3.substr(6, 4);
    cout << s4 << endl;

    string s5 = "gdshfvsiojnsanlkndvipacnp";
    sort(s5.begin(), s5.end());
    cout << s5 << endl;

    return 0;
}