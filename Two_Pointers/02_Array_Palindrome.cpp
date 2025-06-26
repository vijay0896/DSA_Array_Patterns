#include <iostream>
using namespace std;
int ArrPalindrome(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (arr[left] == arr[right])
        {
            left++;
            right--;
        }
        else
        {
            return -1;
        }
    }
    return 1;
}
int main()
{

    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = ArrPalindrome(arr, size);
    if (ans == -1)
    {
        cout << "Not  a Palindrome array" << endl;
    }
    else
    {
        cout << "Its Palindrome" << endl;
    }
}