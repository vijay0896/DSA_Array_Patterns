// 10. Check if Array is Already Sorted
// Input: [1, 2, 3, 4] → Output: Yes

#include <iostream>
using namespace std;

bool IsSorted(int arr[], int size)
{
    int left = 0;
    int right = 1;

    while (right < size)
    {
        if (arr[left] > arr[right])
        {
            return false; // not sorted
        }
        left++;
        right++;
    }

    return true; // sorted
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool ans = IsSorted(arr, size);
    if (ans)
        cout << "Yes, Sorted" << endl;
    else
        cout << "No, Not Sorted" << endl;

    return 0;
}
