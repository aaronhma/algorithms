# Vectors

## Iterators

![Iterators](images/vectors/iterators.png)

Note that `begin()` points to an element in the data structure (first element), while `end()` points outside the data structure (last element outside the data structure + 1). The element where an iterator points to can be accessed using the $*$ symbol.

```cpp
cout << *arr.begin() << "\n";
```

## Special Operations

Some of the operations possible such that we have an `vector` called $arr$:

-   `arr.back()`: returns last element of a vector
-   `arr.pop_back()`: Deletes the last element of a vector
-   `arr.begin()`: Iterator to first element in array
-   `arr.end()`: Iterator to end of the array + 1
-   `std::shuffle(arr.begin(), arr.end())`: Randomly shuffles the array
-   `arr.erase(std::unique(arr.begin(), arr.end()))`: Makes the array unique
-   `std::sort(arr.begin(), arr.end())`: Sorts the array
