#include <iostream>
using namespace std;

void Search(int arr[], int size, int target)
{

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid] << " found At index " << mid << endl;
            return;
        }
        else if (arr[left] <= arr[mid])
        {
            if (arr[left] <= target && target < arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && target <= arr[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
}
int main()
{

    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    Search(arr, size, target);
}