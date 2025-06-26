// 9. Count number of elements greater than given number
// Input: [1, 3, 5, 7], target = 4 → Output: 2 (5, 7)

#include <iostream>
using namespace std;

int countGreater(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int ans = size; // default: assume no element > target

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] > target)
        {
            ans = mid;       // possible answer
            right = mid - 1; // move to left half
        }
        else
        {
            left = mid + 1;  // move to right half
        }
    }

    return size - ans;
}

int main()
{
    int arr[] = {1, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = countGreater(arr, size, target);
    cout << result << endl; // Output: 2
}
