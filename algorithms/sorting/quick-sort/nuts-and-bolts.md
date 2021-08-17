# Nuts & Bolts [(C++)](./nuts-and-bolts.cpp)

## The Problem

You are given $n$ nuts and $n$ bolts of different characters. Match the nuts and the bolts **efficiently**. Unfortunately, you **cannot** compare a nut with another nut, or a bolt with another bolt. You can **only** compare a nut with another bolt, or a bolt with a nut.

**If there are multiple answers, you may print any of them.**

**Constraints:**

-   The characters in $bolts$ are the same as the characters in $nuts$.
-   $nuts.size() == bolts.size() == n$

## Example

```python
> nuts = ['@', '#', '$', '%', '^', '&']
> bolts = ['$', '%', '&', '^', '@', '#']
> matchPairs(nuts, bolts)

# $ % & @ ^
# $ % & @ ^
```

**Explanation:**

One possible solution is `# $ % & @ ^` in both nuts and bolts.

## Approach 1: Brute Force

We can simply brute force by

```cpp
void match(vector<char> &nuts, vector<char> &bolts) {
  int n = nuts.size();

  vector<char> new_bolts(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (nuts[i] == bolts[j]) {
        new_bolts[i] = nuts[i];
      }
    }
  }

  bolts = new_bolts;
}
```

## Approach 2: Quick Sort

## BONUS: $\theta(1)$ Solution

Some observations:

-   **If there are multiple answers, you may print any of them.**
-   The nuts and bolts printed are the same.
-   The characters in $bolts$ are the same as the characters in $nuts$.

Since we can print **any valid** answer and that the nuts and bolts printed are the same, we can conclude that an $\theta(1)$ solution exists:

```cpp
void match(vector<char> &nuts, vector<char> &bolts) {
  bolts = nuts;
}
```
