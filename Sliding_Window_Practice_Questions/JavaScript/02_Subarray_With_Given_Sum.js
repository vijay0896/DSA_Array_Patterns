// 32 Find Subarray With Given Sum (Fixed size window)
// Goal: K-size subarray jiska sum = X ho.

// 🔹 Input:
// arr = [1, 4, 20, 3, 10, 5], k = 3, X = 33

// 🔹 Output:
// [20,3,10] → (sum = 33)
// Or print: "Found" / "Not Found"

const FoundSubArr = (arr, k, sumX, size) => {
  let window_sum = 0;
  for (let i = 0; i < k; i++) {
    window_sum += arr[i];
  }
  if (sumX == window_sum) {
    console.log("Found");
    return;
  }

  for (let i = k; i < size; i++) {
    window_sum += arr[i] - arr[i - k];
    if (sumX == window_sum) {
      console.log("Found");
       return;
    }
  }
  console.log("Not found");
};

const arr = [1, 4, 20, 3, 10, 5];
const k = 3;
const sumX = 33;
const size = 6;

FoundSubArr(arr, k, sumX, size);
