#include <iostream>
using namespace std;

void PeakIndex(int arr[], int size)
{
    int left = 1;
    int right = size - 2;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            cout << arr[mid] << " Found at index " << mid << endl;
            return;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
}

int main()
{

    int arr[] = {0, 3, 8, 9, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    PeakIndex(arr, size);
}
