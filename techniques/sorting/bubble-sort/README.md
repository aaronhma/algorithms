# Bubble Sort

## About

Bubble sort is the easiest sorting algorithm that works in $\theta(n^2)$ time by repeatedly swapping the adjacent elements if they are in wrong order.

## Example

![Image](ex.png)

## Code

```cpp
void sort(vector<int> &arr)
{
  int n = arr.size();

  // n operations in the worst cast
  for (int i = 0; i < n; i++)
  {
    // Optimization trick: Each step moves the "current being sorted" maximum element to the correct position in the back. Because of this, we only need to check up to n - i - 1.
    for (int j = 0; j < n - i - 1; j++)
    {
      // If elements are in wrong order, swap them.
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
}
```
