// Strings basics.

// sample output:
// str1= hello world
// enter a string value for str2
// 8BitZonker
// str2= 8BitZonker
// str3= BBBBB

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "hello world";
    cout << "str1= " << str1 << endl;

    string str2;
    cout << "enter a string value for str2" << endl;
    cin >> str2;
    cout << "str2= " << str2 << endl;

    string str3(5, 'B');
    cout << "str3= " << str3 << endl;

    return 0;
}