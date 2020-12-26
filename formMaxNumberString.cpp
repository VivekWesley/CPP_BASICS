// form a maximum number out of given number string.

// sample output:
// 98765544221

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "24561245789";

    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    return 0;
}