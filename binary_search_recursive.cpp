// binary search recursive method

// sample output:
// element is present at index: 6

#include <iostream>
using namespace std;

int binary_search_helper(int arr[], int L, int R, int target)
{
    if (R >= 1)
    {
        int mid = L + (R - L) / 2;

        if (arr[mid] == target)
            return mid;

        if (target < arr[mid])
            return binary_search_helper(arr, L, mid - 1, target);

        return binary_search_helper(arr, mid + 1, R, target);
    }
    return -1;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search_helper(arr, 0, n - 1, target);
    (result == -1) ? cout << "element is not present in array" : cout << "element is present at index: " << result << endl;

    return 0;
}