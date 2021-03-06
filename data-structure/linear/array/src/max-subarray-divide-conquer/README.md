# Maximum Sum Subarray (Divide & Conquer)

Using the Divide and Conquer approach, we can find the maximum subarray sum in $\theta(n \ log \ n)$ time. We only need to check for $3$ cases assuming that we've divided the given array into two halves:

-   Maximum subarray sum in left half (make recursive call)
-   Maximum subarray sum in right half (make recursive call)
-   Maximum subarray sum such that the subarray crosses the midpoint ($crossingSum(arr, left, mid, right)$)

For the $crossingSum$ function, we calculate the sum of the left side $arr[left:mid]$ and the right side $arr[mid + 1:right]$. The answer will then be $max(leftSum + rightSum, max(leftSum, rightSum))$.

```cpp
int crossingSum(vector<int> &arr, int left, int mid, int right)
{
  // Calculate the maximum sum of the elements on the left (arr[left:mid])
  int sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;

  for (int i = left; i <= mid; i++)
  {
    sum += arr[i];
    left_sum = max(left_sum, sum);
  }

  // Reset sum
  sum = 0;

  // Calculate the maximum sum of the elements on the right (arr[mid + 1:right])
  for (int i = mid + 1; i <= right; i++)
  {
    sum += arr[i];
    right_sum = max(right_sum, sum);
  }

  // Get the max of 3 cases:
  // 1. both sides sum
  // 2. left side sum
  // 3. right side sum
  return max(left_sum + right_sum, max(left_sum, right_sum));
}

int sum(vector<int> &arr, int left, int right)
{
  // Base case: Only one element
  if (left == right)
    return arr[left]; // Return the only element

  // Get the middle element
  // (left + (right - left)) / 2 to prevent overflow
  int mid = left + (right - left) / 2;

  // Return the maximum of 3 cases:
  // 1. (recursive call) Maximum subarray sum of arr[left:mid]
  // 2. (recursive call) Maximum subarray sum of arr[mid + 1:right]
  // 3. Maximum subarray sum such that the subarray crosses the midpoint
  return max(sum(arr, left, mid), max(sum(arr, mid + 1, right), crossingSum(arr, left, mid, right)));
}
```
