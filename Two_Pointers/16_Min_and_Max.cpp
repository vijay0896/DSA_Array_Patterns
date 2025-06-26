// Find Min and Max using Two Pointers
// Input: [5, 3, 1, 2, 4] → Output: Min=1, Max=5

#include <iostream>
using namespace std;
void findMinMax(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int minVal = INT_MAX;
    int MaxVal = INT_MIN;

    while (left <= right)
    {
        minVal = min(minVal, min(arr[left], arr[right]));
        MaxVal = max(MaxVal, max(arr[left], arr[right]));
        left++;
        right--;
    }
    cout << "max Num is" << MaxVal << endl;
    cout << "min Num is " << minVal << endl;
}
int main()
{

    int arr[] = {5, 3, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMinMax(arr, size);

    return 0;
}