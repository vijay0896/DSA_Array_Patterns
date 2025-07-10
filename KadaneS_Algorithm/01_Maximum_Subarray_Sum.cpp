#include <iostream>
using namespace std;

int maxSubSum(int arr[], int size)
{
    int MaxSum = INT_MIN;
    int curSum = 0;
    for (int i = 0; i < size; i++)
    {
        curSum += arr[i];
        MaxSum = max(curSum, MaxSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return MaxSum;
}

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = maxSubSum(arr, size);
    cout << ans;

    return 0;
}