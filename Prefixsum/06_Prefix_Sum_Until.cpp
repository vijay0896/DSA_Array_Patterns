// 6. Print prefix sum until sum > 10
// Input: arr = [1,2,3,4,5,6]
// Output: 1 3 6 10 (stop before 15)
// 👉 Stop loop if prefix > 10

#include <iostream>
using namespace std;
void PrefixSumUntil(int arr[], int size)
{
    int prefixSum = 0;

    for (int i = 0; i < size; i++)
    {
        prefixSum += arr[i];
        if (prefixSum > 10)
            break;

        cout << prefixSum << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    PrefixSumUntil(arr, size);

    return 0;
}