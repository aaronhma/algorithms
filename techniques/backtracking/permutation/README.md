# Permutations

<details>

<summary>What's a Permutation</summary>

Mathematically speaking, a permutation is the arrangement of the array ${a_1, a_2, ..., a_n}$ to ${a_1\hat{}, a_2\hat{}, ..., a_n\hat{}}$.

</details>

<details>

<summary>C++ Usage</summary>

Assume we have an array $arr = \{a_1, a_2, a_3, ..., a_n\}$. We can have 3 different "variants" of C++'s built-in `next_permutation`:

-   Variant #1:

```cpp
while (next_permutation(arr.begin(), arr.end())) {
  // Does not include original array
}
```

-   Variant #2:

```cpp
do {
  // Includes original array before permutated in sorted order
} while (next_permutation(arr.begin(), arr.end()));
```

</details>

# ⚠️ IMPORTANT ⚠️

**NOTE:** If you want to get **all** of the permutations of the array $arr$, you must sort the array. [This](https://stackoverflow.com/a/31258517) StackOverflow answer explains this quite elegantly:

```
To return all permutations in a loop until next_permutation returns false, the vector must be sorted before the start of the loop.

next_permutation returns the permutations in ascending order. So if you start off with an unsorted vector, it will begin part way through the series of permutations.
```

-   Variant #3:

```cpp
std::sort(arr.begin(), arr.end());
do {
  // do something
} while(next_permutation(arr.begin(), arr.end()));
```
