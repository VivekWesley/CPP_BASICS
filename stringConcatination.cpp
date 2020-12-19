// string Append|concatination.

// sample output:
// s1 = 8bit
// s2 = Zonker
// s1 + s2 = 8bitZonker
// s3 = 8bitZonker
// s1.append(s2) = 8bitZonker

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "8bit";
    string s2 = "Zonker";
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    cout << "s1 + s2 = " << s1 + s2 << endl;

    string s3 = s1 + s2;
    cout << "s3 = " << s3 << endl;

    s1.append(s2);
    cout << "s1.append(s2) = " << s1 << endl;

    return 0;
}