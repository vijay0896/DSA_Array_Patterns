// Count Pairs with Equal Elements
// Input: [1, 2, 1, 2] → Output: 2 pairs (1-1 and 2-2)

#include <iostream>
using namespace std;
void countPair(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    cout << count;
}
int main()
{

    int arr[] = {1, 2, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    countPair(arr, size);

    return 0;
}