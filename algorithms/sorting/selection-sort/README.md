# Selection Sort [(C++)](./selection-sort.cpp)

## About

The selection sort algorithm sorts an array by repeatedly finding the minimum element from the unsorted part and putting it in the appropriate place in the sorted array.

## Example

```cpp
arr = {64, 25, 12, 22, 11}

// Find the minimum element in arr[0...4]
// and place it at beginning
[11] 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 [12] 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 [22] 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 [25] 64

// Array is sorted
11 12 22 25 64
```
