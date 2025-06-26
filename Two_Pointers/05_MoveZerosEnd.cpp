// Given: An array
// Task: Move all 0’s to the end while keeping the order of non-zero elements.

// Input: arr = [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]

#include <iostream>
using namespace std;

void MoveZeroEnd(int arr[], int size)
{

    int NonZeroEle = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[NonZeroEle];
            arr[NonZeroEle] = arr[i];
            arr[i] = temp;
            NonZeroEle++;
        }
    }
}
int main()
{

    int arr[] = {0, 1, 0, 2, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    MoveZeroEnd(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}