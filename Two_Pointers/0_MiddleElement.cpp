// Task: Find the middle element of array using two pointers

// Input: arr = [10, 20, 30, 40, 50]
// Output: 30

#include <iostream>
using namespace std;

int MidEle(int arr[], int size)
{

    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        left++;
        right--;
    }

    return arr[left];
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = MidEle(arr, size);
    cout << ans;
}