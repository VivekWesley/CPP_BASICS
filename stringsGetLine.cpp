// Accepting a String value with including spaces.

// sample output:
// enter a sentence:
// Ideas don't come out fully formed. They only become clear as you work on them. You just have to get started.
// str1= Ideas don't come out fully formed. They only become clear as you work on them. You just have to get started.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cout << "enter a sentence: " << endl;
    getline(cin, str1);

    cout << "str1= " << str1 << endl;
    return 0;
}