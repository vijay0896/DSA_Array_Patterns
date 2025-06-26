//  Find all unique pairs that sum to a target (unsorted)
// Input: [1, 5, 7, -1, 5], target = 6 → Output: (1,5), (7,-1)

#include <iostream>
using namespace std;
void UniquePairs(int arr[], int size, int target)
{

    int result[size];
    int idx = 0;
    for (int i = 0; i < size; i++)

    {
        for (int j = i + 1; j < size; j++)
        {

            if (target == arr[i] + arr[j])
            {
                cout << "(" << arr[i] << "," << arr[j] << ")";
            }
        }
    }
}

int main()
{

    int arr[] = {1, 5, 7, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    UniquePairs(arr, size, target);
    return 0;
}