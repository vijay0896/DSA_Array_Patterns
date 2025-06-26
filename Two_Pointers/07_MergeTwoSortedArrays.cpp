//  Merge Two Sorted Arrays
// Task: Merge two sorted arrays into one sorted array

// Input: a = [1, 3, 5], b = [2, 4, 6]
// Output: [1, 2, 3, 4, 5, 6]

#include <iostream>
using namespace std;
void MergeArr(int a[], int b[], int sizeA, int sizeB)
{
    int i = 0;
    int j = 0;
    int arr[100];
    int idx = 0;
    while (i < sizeA && j < sizeB)
    {
        if (a[i] < b[j])
        {
            arr[idx++] = a[i];
            i++;
        }
        else
        {
            arr[idx++] = b[j];
            j++;
        }
    }
    // Copy remaining elements of a[]
    while (i < sizeA)
    {
        arr[idx++] = a[i++];
    }

    // Copy remaining elements of b[]
    while (j < sizeB)
    {
        arr[idx++] = b[j++];
    }

    // Print merged array
    for (int k = 0; k < idx; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{

    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);
    MergeArr(a, b, sizeA, sizeB);
}