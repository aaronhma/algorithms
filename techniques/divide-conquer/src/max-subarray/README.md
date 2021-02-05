# Maximum Sum Subarray (Divide & Conquer)

Using the Divide and Conquer approach, we can find the maximum subarray sum in $\theta(n \ log \ n)$ time. We only need to check for $3$ cases assuming that we've divided the given array into two halves:

- Maximum subarray sum in left half (make recursive call)
- Maximum subarray sum in right half (make recursive call)
- Maximum subarray sum such that the subarray crosses the midpoint ($crossingSum(arr, left, mid, right)$)
