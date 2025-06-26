// 2. Sum of first k elements
// Input: arr = [1, 2, 3, 4, 5], k = 3
// Output: 6 (1 + 2 + 3)
// 👉 Use simple prefix loop.

#include <iostream>
using namespace std;
int sumKprefix(int arr[], int size, int k)
{

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int ans = sumKprefix(arr, size, k);
    cout << ans << endl;

    return 0;
}