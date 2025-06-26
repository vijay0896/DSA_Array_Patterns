#include <iostream>
using namespace std;
void reverseArr(int arr[], int size)

{

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        left++;
        right--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}