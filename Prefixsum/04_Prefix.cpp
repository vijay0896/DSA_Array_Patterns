// 4. Find first index where prefix sum ≥ X
// Input: arr = [1, 2, 3, 4], X = 6
// Output: 2 (prefix[2] = 6)
// 👉 Check from left, return index.

#include <iostream>
using namespace std;
void FindIndex(int arr[], int size, int x)

{

    int PrefixSum = 0;
    for (int i = 0; i < size; i++)
    {
        PrefixSum = PrefixSum + arr[i];
        if (PrefixSum >= x)
        {
            cout << "at index " << i << endl;
            return; // Stop after finding the first one
        }
    }
    {
        // If not found
        cout << "No prefix sum is ≥ " << x << endl;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    FindIndex(arr, size, x);

    return 0;
}