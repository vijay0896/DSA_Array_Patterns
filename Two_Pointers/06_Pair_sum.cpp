// Pair with Given Sum in Sorted Array
// Input: [1, 2, 3, 4, 6], target = 6 → Output: (2, 4)

#include <iostream>
using namespace std;

void PairSum(int arr[], int size, int target)

{
    int result[size];
    int idx = 0;
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            result[idx++] = arr[left];
            result[idx++] = arr[right];
            for (int i = 0; i < idx; i++)
            {
                cout << result[i] << " ";
            }
            return;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    PairSum(arr, size, target);
}