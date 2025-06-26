// Remove All Occurrences of a Given Element
// Input: [1, 2, 3, 2, 4], val = 2 → Output: [1, 3, 4]

#include <iostream>
using namespace std;
void removeOccurrences(int arr[], int size, int val)
{

    int result[size];
    int idx = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != val)
        {
            result[idx++] = arr[i];
        }
    }

    for (int i = 0; i < idx; i++)
    {
        cout << result[i] << " ";
    }
}
int main()
{

    int arr[] = {1, 2, 3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val = 2;
    removeOccurrences(arr, size, val);
}