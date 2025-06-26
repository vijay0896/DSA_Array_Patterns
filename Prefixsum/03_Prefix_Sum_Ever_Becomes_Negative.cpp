// 3. Check if prefix sum ever becomes negative
// Input: arr = [5, -2, -4, 3]
// Output: Yes (prefix becomes -1)
// 👉 Running total me kabhi bhi negative aaye, return Yes.
#include <iostream>
using namespace std;

int CheckNegative(int arr[], int size)
{

    int PrefixSum = arr[0];
    if (PrefixSum < 0)
        return -1;
    for (int i = 1; i < size; i++)
    {
        PrefixSum = PrefixSum + arr[i];

        if (PrefixSum < 0)
        {
            return -1;
        }
        }

    return 1;
}

int main()
{

    int arr[] = {5, -2, -4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = CheckNegative(arr, size);
    if (ans < 0)
    {
        cout << "Yes Its negative" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}