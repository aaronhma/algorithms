# Arrays

## About

An array in C++ is a static array that is defined upon initialization.

## Syntax

```cpp
int arr[50];
```

In the example above, we create an array of size $50$ (we can store $50$ elements numbered from indexes $0$ to $49$).

If we were to access the $6$-th element, we can access it with $arr[6]$.

**WARNING: The $i$-th index in $arr[i]$ must be an integer from $0$ to $n - 1$ where $n$ is the size of the vector.**

## Sorting an Array

We can sort an array in $\theta(n \ log \ n)$ using the `sort` function:

```cpp
// WARNING: This code does NOT work properly. Can you spot it?
int arr[] = {4, 1, 2, 5, 3};
sort(arr, arr + 4);
```

Unfortunately, after running this, our "sorted" array is $\{ 1, 2, 4, 5, 3\}$. Why is that? It turns out $arr + 4$ means sort the first $4$ elements in the array.

If we were to sort the entire array, we have to do $sort(arr, arr + n)$ where $n$ is the size of the array.

```cpp
int arr[] = {4, 1, 2, 5, 3};
sort(arr, arr + 5);
```
