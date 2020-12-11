// largest word in the sentence.

// sample output:
// enter array size:
// 10
// enter a sentence
// do or die

// 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cout << "enter a sentence" << endl;
    cin.getline(arr, n);
    cin.ignore();

    int maxLength = 0;
    int currentLength = 0;
    int i = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
            currentLength = 0;
        }
        else
            currentLength++;

        if (arr[i] == '\0')
            break;

        i++;
    }
    cout << maxLength << endl;
    return 0;
}