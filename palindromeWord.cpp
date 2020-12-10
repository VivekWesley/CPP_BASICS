// check palindrome or not

// sample output 1:
// enter array size:
// 5
// enter a word:
// nitin
// word is a palindrome

// sample output 2:
// enter array size:
// 5
// enter a word:
// mohit
// word is not a palindrome

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    char arr[n + 1];

    cout << "enter a word: " << endl;
    cin >> arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
        cout << "word is a palindrome" << endl;
    else
        cout << "word is not a palindrome" << endl;

    return 0;
}