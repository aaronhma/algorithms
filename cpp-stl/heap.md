# Max-Heap

## We can't create a min-heap from a vector. To create a min-heap/max-heap without a vector, see [priority queues](priority-queue.md).

## Creating a Heap

We can create a heap from a vector using the `make_heap` function:

```cpp
vector<int> arr {1, 2, 3, 4, 5, 6};
make_heap(arr.begin(), arr.end());

cout << "Maximum element of heap: " << arr.front() << "\n";
cout << "Minimum element of heap: " << arr.back() << "\n";
```

## Adding & Deleting Elements from the Heap

We add elements to the array-based heap using `push_back`, then perform a `push_heap` operation to re-order elements in the array.

```cpp
arr.push_back(60);
push_heap(arr.begin(), arr.end());
```

Using `pop_heap` we can delete the **maximum** element from the heap, though we'll also have to perform the `pop_back` operation after the `pop_heap` operation.

```cpp
pop_heap(arr.begin(), arr.end());
arr.pop_back();
```

## Sorting a Heap

We can sort a heap with the `sort_heap` operation, though after this operation, the container is **no longer a heap**.

```cpp
sort_heap(arr.begin(), arr.end());
```

## Additional Functions

Using `is_heap`, we can check whether the container is a heap or not. In C++, the reverse sorted container is also considered as a heap.

```cpp
is_heap(arr.begin(), arr.end());
```

The `is_heap_until` returns the iterator to the **last** position that is still a heap in the container. In C++, the reverse sorted container is also considered as a heap.

```cpp
auto it = is_heap_until(arr.begin(), arr.end());
```
