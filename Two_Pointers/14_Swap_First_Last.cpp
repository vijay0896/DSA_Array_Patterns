// Swap First and Last
// Input: [1, 2, 3, 4] → Output: [4, 2, 3, 1]

#include <iostream>
using namespace std;
void SwapFirstAndLast(int arr[], int size)
{

    int first = 0;
    int last = size - 1;
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    SwapFirstAndLast(arr, size);

    return 0;
}