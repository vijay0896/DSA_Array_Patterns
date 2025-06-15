#include <iostream>
using namespace std;

void AvgSub(int nums[], int size, int k, float sub_avg[])
{
    float window_sum = 0;

    int idx = 0;

    for (int i = 0; i < k; i++)
    {
        window_sum += nums[i];
    }
    sub_avg[idx++] = window_sum / k;

    for (int i = k; i < size; i++)
    {
        window_sum += nums[i] - nums[i - k];
        sub_avg[idx++] = window_sum / k;
    }
}
int main()
{
    int nums[] = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 5;
    float sub_avg[100];
    AvgSub(nums, size, k, sub_avg);
    for (int i = 0; i <= size - k; i++)
    {
        cout << sub_avg[i] << " ";
    }
}