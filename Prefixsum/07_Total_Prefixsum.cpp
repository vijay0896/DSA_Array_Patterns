//  7. Find total sum using prefix
// Input: arr = [1, 2, 3, 4]
// Output: 10
// 👉 Just last value of prefix array.
#include <iostream>
using namespace std;

int TotalPrefixSum(int arr[], int size)
{
    int TotalSum = 0;
    for (int i = 0; i < size; i++)
    {
        TotalSum += arr[i];
    }
    return TotalSum;
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = TotalPrefixSum(arr, size);
    cout << ans << endl;

    return 0;
}