#include <iostream>
using namespace std;

void PrefixSum(int arr[], int size)

{
    for (int i = 1; i < size; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {5, 4, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    PrefixSum(arr, size);

    return 0;
}