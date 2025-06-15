const maxSum = (nums, k, size) => {
  let window_sum = 0;
  let max_sum = 0;
  for (let i = 0; i < k; i++) {
    window_sum += nums[i];
  }
  max_sum = window_sum;
  for (let i = k; i < size; i++) {
    window_sum += nums[i] - nums[i-k];
    max_sum = Math.max(max_sum, window_sum);
  }
  return max_sum;
};

const nums = [12, 4, 45, 6, 6];
const k = 3;
const size = 5;

const ans = maxSum(nums, k, size);
console.log(ans);
