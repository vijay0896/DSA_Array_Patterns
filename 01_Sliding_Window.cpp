#include <iostream>
using namespace std;

// Sliding Window Example: Max Sum Subarray of Size K
int maxSum(int nums[], int n, int k)
{
    int max_sum = 0, window_sum = 0;

    // First window sum
    for (int i = 0; i < k; i++)
        window_sum = window_sum + nums[i];
    max_sum = window_sum;

    // Sliding the window
    for (int i = k; i < n; i++)
    {
        window_sum = window_sum + nums[i] - nums[i - k];

        max_sum = max(window_sum, max_sum);
    }

    return max_sum;
}

int main()
{
    int nums[] = {12, 4, 45, 6, 6};
    int k = 3;
    int n = sizeof(nums) / sizeof(nums[0]);

    int ans = maxSum(nums, n, k);
    cout << "Max sum of subarray of size " << k << " is: " << ans << endl;

    return 0;
}
