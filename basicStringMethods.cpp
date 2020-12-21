// basic string methods.

// sample output:
// -1
// strings are equal
// s1 is empty
// s2 is not empty
// erase 6 characters starting from index 4:
// 8bit
// find index from where string <it> starts:
// 2
// insert string starting from particular index:
// 8bitCoder
// size  of string:
// 9
// 9

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "xyz";

    cout << s1.compare(s2) << endl;

    string s3 = "abc";
    if (s3.compare(s1) == 0)
        cout << "strings are equal" << endl;

    s1.clear();

    if (s1.empty())
        cout << "s1 is empty" << endl;

    if (!s2.empty())
        cout << "s2 is not empty" << endl;

    cout << "erase 6 characters starting from index 4:" << endl;
    string s4 = "8bitZonker";
    cout << s4.erase(4, 6) << endl;

    cout << "find index from where string <it> starts:" << endl;
    cout << s4.find("it") << endl;

    cout << "insert string starting from particular index:" << endl;
    s4.insert(4, "Coder");
    cout << s4 << endl;

    cout << "size  of string: " << endl;
    cout << s4.length() << endl;
    cout << s4.size() << endl;

    return 0;
}