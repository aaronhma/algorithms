# Sum of the Product of All Pairs in an Array

## Example

```python
> arr = [1, 3, 4]
> sumProduct(arr) = 19
```

**Explanation: The possible pairs are $(1, 3), (1, 4), (3, 4)$ and the sum of the product is $(1 * 3) + (1 * 4) + (3 * 4) = 3 + 4 + 12 = 19$.**

## Approach 1: Brute Force

We can directly simulate what is said by generating indexes $i$ and $j$ and adding $arr[i] * arr[j]$ to our answer.

### Complexity Analysis

This solution runs in $\theta(n^2)$ time (two loops) and $\theta(1)$ space (we always create a variable, regardless of input size).

### Code

```cpp
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll findProductSum(vector<ll> &arr, ll n)
{
    ll ans = 0;

    // generate i-th index
    for (ll i = 0; i < n; i++)
        // generate j-th index
        for (ll j = i + 1; j < n; j++)
            // multiply the two numbers and add it to the answer
            ans += A[i] * A[j];

    return ans;
}

int main()
{
    vector<ll> arr = {1, 3, 4};
    ll n = arr.size();

    cout << findProductSum(A, n) << "\n";

    return 0;
}
```

## Approach 2: Mathematics

**ℹ️ Formulas to Know:**

-   $$(a + b + c)^2 = a^2 + b^2 + c^2 + 2(ab + bc + ca)$$

We can start by assuming that $P$ is the sum of the product of all pairs in the array.

Let $E = (arr_1 + arr_2 + arr_3 + ... + arr_n)^2$.

Then, we can find $P$.

$$E = {arr_1}^2 + {arr_2}^2 + {arr_3}^2 + ... + {arr_n}^2 + 2(arr_1arr_2 + arr_1arr_3 + ...)$$

Pay special attention to $2(arr_1arr_2 + arr_1arr_3 + ...)$. $arr_1arr_2 + arr_1arr_3 + ...$ is the sum of the product of all pairs in the array! Thus, $2(arr_1arr_2 + arr_1arr_3 + ...) = 2P$

$$E = {arr_1}^2 + {arr_2}^2 + {arr_3}^2 + ... + {arr_n}^2 + 2P$$

Because $P$ is our desired answer, let's express $P$ in terms of $E$.

$$2P = E - {arr_1}^2 + {arr_2}^2 + {arr_3}^2 + ... + {arr_n}^2$$

To get $P$, we'll divide both sides by $2$.

$$P = \frac{E - {arr_1}^2 + {arr_2}^2 + {arr_3}^2 + ... + {arr_n}^2}{2}$$

### Complexity Analysis

This approach works in $\theta(n)$ (loop through the array once) and $\theta(1)$ space (we'll always create 2 variables, regardless of input size).

### Code

Implementing this is an easy task - just implement the mathematical formula!

```cpp
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // input array
  vector<ll> arr = {1, 3, 4};

  // long long to prevent overflow
  // E: sum of all the element in the array
  // (arr_1 + arr_2 + ... + arr_n)^2
  // element_sq: arr_1^2 + arr_2^2 + ... + arr_n^2
  ll E = 0, element_sq = 0;

  for (ll i : arr) {
    E += i;
    element_sq += i * i;
  }

  // square E
  E = E * E;

  // P = (E - (arr_1^2 + arr_2^2 + ... + arr_n^2)) / 2
  cout << (E - element_sq) / 2 << "\n";

  return 0;
}
```
