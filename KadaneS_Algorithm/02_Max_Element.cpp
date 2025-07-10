// Find Max Element
// 🧠 Return the largest element in an array.
// 🔢 Input: arr = [1, 4, -2, 8, -5]
// 📤 Output: 8
// 🧩 Kadane’s base step: max tracking.

#include <iostream>
using namespace std;
int maxEle(int arr[], int size)
{
   
    int maxEle = INT_MIN;
    for (int i = 0; i < size; i++)
    {

        maxEle = max(arr[i], maxEle);
    }
    return maxEle;
}

int main()
{
    int arr[] = {1, 4, -2, 8, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = maxEle(arr, size);
    cout << ans << endl;

    return 0;
}