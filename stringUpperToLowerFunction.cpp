// upper to lower string conversion using function.

// sample output:
// vivekwesley

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s = "VIVEKWESLEY";

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;

    return 0;
}