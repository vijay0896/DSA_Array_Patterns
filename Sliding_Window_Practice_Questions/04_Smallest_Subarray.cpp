//  Smallest Subarray With Sum ≥ Target
// Goal: Smallest length subarray jiska sum ≥ target

// 🔹 Input:
// arr = [2,3,1,2,4,3], target = 7

// 🔹 Output:
// 2 → Subarray: [4,3]
#include <iostream>
#include <climits>
using namespace std;

int smallestSubarray(int arr[], int size, int target) {
    int minLength = INT_MAX;
    int start = 0, sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];  // window expand

        while (sum >= target) {
            minLength = min(minLength, i - start + 1);
            sum -= arr[start];  // window shrink from left
            start++;
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = smallestSubarray(arr, size, target);
    cout << result << endl;  // Output: 2
    return 0;
}
