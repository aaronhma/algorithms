# Binary Search - Template I

## **About**

Binary search is an efficient algorithm that runs in $\theta(log \ n)$ for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one. It's essentially a **Divide & Conquer** algorithm:

-   **Divide:** Divide the range $[low, high]$ of the array $arr$ in half
-   **Conquer:** Check which half contains the element. We _"discard"_ the half that doesn't have the element
-   **Combine:** No combine in binary search. 😀

## **Key Attributes:**

-   Most basic and elementary form of Binary Search
-   Search Condition can be determined without comparing to the element's neighbors (or use specific elements around it)
-   No post-processing required because at each step, you are checking to see if the element has been found. If you reach the end, then you know the element is not found
-   Template #1 is used to search for an element or condition which can be determined by accessing a single index in the array.

```cpp
int binarySearch(vector<int>& nums, int target) {
  if (nums.size() == 0)
    return -1;

  // [low, high] initial range
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    // Prevent (low + high) / 2 overflow
    int mid = low + (high - low) / 2;
    int guess = nums[mid];

    // Found target!
    if (guess == target) return mid;

    // Target is on right side of array
    else if (guess < target) low = mid + 1;

    // Target is on left side of array
    else high = mid - 1;
  }

  // Couldn't find target in the array
  return -1;
}
```

## **Syntax:**

-   Initial Condition: `low = 0, high = length-1`
-   Termination: `low > high`
-   Searching Left ("Discarding" the Right Side): `high = mid - 1`
-   Searching Right ("Discarding" the Left Side): `low = mid + 1`
