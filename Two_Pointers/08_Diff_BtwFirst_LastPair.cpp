// Difference Between First and Last Pair
// Input: [10, 20, 30, 40, 50] → Output: 40 (50 - 10)
#include <iostream>
using namespace std;
int dif(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    int ans = arr[right] - arr[left];
    return ans;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = dif(arr, size);
    cout << ans;
}