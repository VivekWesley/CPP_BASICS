// lower to uppercase string conversion using function.

// sample output:
// VIVEKWESLEY

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "vivekwesley";
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    return 0;
}