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
```

## Code

```cpp
void sort(vector<int> &arr) {
  int n = arr.size();

  // Go through the index where we will place the next min element into the sorted array
  // n - 1, as the last element is guaranteed to be the last element
  for (int i = 0; i < n - 1; i++) {
    // Find the minimum element in the unsorted array
    int min_index = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index])
        min_index = j;
    }

    // Swap the found minimum element with the element at position (the place where we'll put the minimum element)
    swap(arr[min_index], arr[i]);
  }
}
```
