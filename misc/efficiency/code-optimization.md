# Code Optimization

## Example: Finding if $x$ is in the array

### Naive Approach

The easiest method is to search the array in $\theta(n)$ time.

```cpp
bool ok = false;
int x = 5; // Define target value here

for (int i : arr) {
  if (i == x) {
    ok = true;
    break; // Break once we've found x - more efficient
  }
}
```

### Sentinel Value

A neat trick we can apply is using a $sentinel \ value$:

```cpp
vector<int> arr(n + 1); // n + 1 for extra sentinel value index

arr[n] = x;
int i;

for (int i = 0; arr[i] != x; i++);

if (i < n) {
  cout << "We've found x!" << "\n";
} else {
  cout << "Couldn't find x" << "\n";
}
```

This trick seemingly looks good, except $arr[i]$ is a bottleneck, as accessing array elements takes some time.
