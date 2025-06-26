// Count Total Pairs in Array

// Input: [1, 2, 3, 4]
// Output: 6 pairs

#include <iostream>
using namespace std;
int CountTotalPairs(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = CountTotalPairs(arr, size);
    cout << ans;

    // Your code here

    return 0;
}