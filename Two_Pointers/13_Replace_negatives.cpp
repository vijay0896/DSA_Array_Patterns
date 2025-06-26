// 15. Replace Negatives with Zeros
// Input: [1, -2, 3, -4] → Output: [1, 0, 3, 0]

#include <iostream>
using namespace std;
void NegToZero(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, -2, 3, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    NegToZero(arr, size);

    // Your code here

    return 0;
}