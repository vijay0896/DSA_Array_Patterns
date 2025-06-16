// Count Occurrences of Window Sum > X
// Goal: Count how many K-size subarrays have sum > X

// 🔹 Input:
// arr = [1, 2, 3, 4, 5], k = 2, X = 5

// 🔹 Output:
// 2

#include <iostream>
using namespace std;

int countOcc(int arr[], int size, int k, int sumX)

{

    int window_Sum = 0;
    int count = 0;

    for (int i = 0; i < k; i++)
    {
        window_Sum += arr[i];
    }
    if (window_Sum > sumX)
    {
        count++;
    }
    for (int i = k; i < size; i++)
    {
        window_Sum += arr[i] - arr[i - k];
        if (window_Sum > sumX)
        {
            count++;
        }
    }
    return count;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int sumX = 5;
    int ans = countOcc(arr, size, k, sumX);
    cout << ans;
}

//  Use Cases:
// Data analytics: Kitne dinon ka sales threshold se zyada hai?
// Health data: Heart rate kitni baar normal se zyada gaya?
// Finance: K din ki average earning kitni baar expected se zyada hui?