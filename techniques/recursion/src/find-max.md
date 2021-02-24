# Finding the Maximum in an Array (using Recursion)

## The Problem

You are given an array $arr$. Find the maximum value in the array using recursion.

**Example 1:**

```python
> arr = [2, 3, 4, 7, 2, 9]
=> max(arr) = 9
```

## Analysis

We start off by defining our recursive formula. We know that for an index $i$ in the array, the max (so far) in the array will be $max(arr[i], prev)$. We also know that when $i = 0$, the max is $arr[0]$. Thus, we have the following recursive formula:

$$
\left\{
\begin{array}{c}
&&\text{i = 0:} \ arr[0] \\
&&\text{i != 0:} \ max(arr[i - 1], arr[i])
\end{array}
\right.
$$

## Code

```cpp
#include <bits/stdc++.h>

using namespace std;

/**
 * Returns the max of the array.
*/
int getMax(vector<int> &arr, int i)
{
  // Base case: i = 0 - Return arr[0] - No more elements before this element
  if (i == 0) return arr[0];

  // Return the maximum of the current element and elements from arr[0] to arr[i - 1]
  return max(arr[i], getMax(arr, i - 1));
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {2, 3, 4, 7, 2, 9};

  // Print the max from arr[0] to arr[n - 1]
  cout << getMax(arr, arr.size() - 1) << "\n";

  return 0;
}
```
