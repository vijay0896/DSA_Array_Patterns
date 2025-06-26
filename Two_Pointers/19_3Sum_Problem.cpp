// 3Sum Problem
// Input: [-1, 0, 1, 2, -1, -4] → Output: All unique triplets that sum to 0

#include <iostream>
using namespace std;
#include <algorithm>
void ThreeSum(int arr[], int size)
{
   

    for (int i = 0; i < size; i++)
    {
        int left = i + 1;
        int right = size - 1;
        while (left <= right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0)
            {
                cout << "(" << arr[i] << "," << arr[left] << "," << arr[right] << ")";
                return;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
}
int main()
{

    int arr[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(arr) / sizeof(arr[0]);

    ThreeSum(arr, size);

    return 0;
}