// Q: Remove all duplicates from a sorted array, but don’t use extra space, and return the new length of the unique array.

// Input: nums = [1, 1, 2, 2, 3, 4, 4, 5]
// Output: 5
// Modified Array (first 5 elements): [1, 2, 3, 4, 5, _, _, _]

#include <iostream>
using namespace std;
void removeDuplicate(int arr[], int size)
{
    int nums[size];
    int idx = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != arr[i + 1])
        {
            nums[idx++] = arr[i];
        }
    }
    for (int i = 0; i < idx; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicate(arr, size);
}