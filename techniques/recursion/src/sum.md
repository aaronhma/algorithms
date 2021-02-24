# Sum of all the Digits of an Integer (using Recursion)

## The Problem

You are given an integer $n$. Return the sum of its digits. **You are only allowed to use recursion to solve this problem.**

**Example 1:**

```python
> n = 123456
=> sum(n) = 21
```

## Analysis

This problem involves some elementary math. If $n = 123456$, $\frac{n}{10} = 12345.6 \approx 12345$ and $n \ \% \ 10 = 6$. With this in mind, let's implement this!

## Code

```cpp
#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
  // Remember: n / 10 truncates/rounds down, so if n == 0,
  // that means we've already summed everything in n, exit
  if (n == 0) return 0;

  // Return the last digit of n and add the sum of the next numbers in n (if it exists)
  return (n % 10) + sum(n / 10);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 123456;

  cout << "Sum of the digits of " << n << " is " << sum(n) << "\n";

  return 0;
}
```
