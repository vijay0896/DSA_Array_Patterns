
// 🔹 5. Find how many even prefix sums
// Input: arr = [2, 3, 5, 1]
// Output: 2 (prefix = [2,5,10,11] → even = 2,10)
// 👉 Count prefix[i] % 2 == 0
#include <iostream>
using namespace std;
int CountPrefixSumEven(int arr[], int size)
{
    int count;
    int PrefixSum = 0;
    for (int i = 0; i < size; i++)
    {
        PrefixSum = PrefixSum + arr[i];
        if (PrefixSum % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int arr[] = {2, 3, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int ans = CountPrefixSumEven(arr, size);
    cout << ans << endl;

    return 0;
}