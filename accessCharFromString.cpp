// access char from a string and use of .clear method

// sample output:
// 8bitZonker
// b
// s1=

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "8bitZonker";
    cout << s1 << endl;
    cout << s1[1] << endl;

    s1.clear();
    cout << "s1= " << s1 << endl;

    return 0;
}