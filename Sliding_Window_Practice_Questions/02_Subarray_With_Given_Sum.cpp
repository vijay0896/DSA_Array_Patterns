// 32 Find Subarray With Given Sum (Fixed size window)
// Goal: K-size subarray jiska sum = X ho.

// 🔹 Input:
// arr = [1, 4, 20, 3, 10, 5], k = 3, X = 33

// 🔹 Output:
// [20,3,10] → (sum = 33)
// Or print: "Found" / "Not Found"

#include <iostream>
using namespace std;

void SubArr(int arr[], int size, int k, int sum, int foundArr[])
{
    int window_sum = 0;

    for (int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }

    if (sum == window_sum)
    {

        cout << "Found" << endl;

        return;
    }

    for (int i = k; i < size; i++)
    {
        window_sum += arr[i] - arr[i - k];
        if (window_sum == sum)
        {
            cout << "Found" << endl;
            return;
        }
    }

    cout << "Not Found" << endl;
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int sum = 33;
    int foundArr[10];

    SubArr(arr, size, k, sum, foundArr);
}