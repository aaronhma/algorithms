# Priority Queue [C++ Code](./priority-queue.cpp)

<details>

<summary>Learn More About Priority Queue</summary>

# Priority Queue

## Background

![Image](https://cdn.programiz.com/sites/tutorial2program/files/Introduction.png)
([Source](https://www.programiz.com/dsa/priority-queue))

A priority queue uses a [heap](https://github.com/aaronhma/algorithms/blob/master/data-structure/non-linear/heap/README.md) which supports the following operations:

-   `push` - Pushes a new element to the heap
-   `pop` - Deletes the highest priority element (max/(min element if we define the priority queue to use a min-heap) element)
-   `empty` - Returns if the priority queue is empty or not
-   `top` - Prints the highest priority item
-   `emplace` - Adds an element to the priority queue in place
-   `swap` - Swaps the elements from one priority queue to another

**NOTE: It replaces the elements in both priority queues to the other one!**

Another thing to know about priority queues is that the first element (root) is always the maximum element. Whenever you insert or delete an element, the internal heap data structure rearranges itself to a valid position (max at root, min at bottom).

## Priority Queue Speed

<table border="0">
		<tbody>
			<tr>
				<th>Data Structure</th>
				<th>top</th>
				<th>push</th>
				<th>pop</th>
			</tr>
			<tr>
				<td>Linked List</td>
				<td><code>O(1)</code></td>
				<td><code>O(n)</code></td>
				<td><code>O(1)</code></td>
			</tr>
			<tr>
				<td>Binary Heap</td>
				<td><code>O(1)</code></td>
				<td><code>O(log n)</code></td>
				<td><code>O(log n)</code></td>
			</tr>
			<tr>
				<td>Binary Search Tree</td>
				<td><code>O(1)</code></td>
				<td><code>O(log n)</code></td>
				<td><code>O(log n)</code></td>
			</tr>
		</tbody>
	</table>

Source: Programiz

## References

-   [C++ Priority Queue](http://www.cplusplus.com/reference/queue/priority_queue/swap/)
-   [C++ Priority Queue Reference](https://en.cppreference.com/w/cpp/container/priority_queue)
-   [Programiz: Priority Queue](https://www.programiz.com/dsa/priority-queue)
-   [YouTube: Heaps & Priority Queues](https://www.youtube.com/watch?v=qXdt1AHMB2o)

</details>

<details>

<summary>Why Priority Queue?</summary>

A priority queue is a multiset in sorted order that allows insertion and removal in $\theta(log \ n)$ time and retrieval in $\theta(1)$ time.

</details>

<details>

<summary>C++ Usage</summary>

```cpp
// create a max-heap (bigger elements have higher priority)
priority_queue<int> q;
q.push(3); // add element
q.push(5);
q.push(7);
q.push(2);

// Another way off adding elements to a priority queue:
q.emplace(9);

cout << q.top() << "\n"; // 7
q.pop(); // delete max element
cout << q.top() << "\n"; // 5
q.pop();
q.push(6);
cout << q.top() << "\n"; // 6
q.pop();
```

<details>

<summary><code>push()</code> vs. <code>emplace()</code></summary>

`push()` adds a copy of an already constructed object into the queue as a parameter, it takes an object of the queue's element type.

`emplace()` constructs a new object in-place at the end of the queue. It takes as parameters the parameters that the queue's element types constructor takes.

If your usage pattern is one where you create a new object and add it to the container, you shortcut a few steps (creation of a temporary object and copying it) by using `emplace()`.

</details>

Similarly, if we wanted to create a priority queue that supports finding/removing the smallest element, we can do it as follows:

```cpp
// create a min-heap (smaller elements have smaller priority)
priority_queue<int, vector<int>, greater<int>> PQ;

// For generic implementations, the implementation is:
priority_queue<Type, vector<Type>, ComparisonType> min_heap; // ComparisonType is a function that can compare Type with another Type
```

We can also swap the contents of a priority queue with another priority queue of the **same size and same data type** using the `priorityqueue1.swap(priorityqueue2)` operation.

```
Input  : mypqueue1 = {1, 2, 3, 4}
         mypqueue2 = {3, 5, 7, 9}
         mypqueue1.swap(mypqueue2);
Output : mypqueue1 = {9, 7, 5, 3}
         mypqueue2 = {4, 3, 2, 1}
```

**Note: In `priority_queue` containers, the elements are printed
in reverse order of the sorted array because the top element (max element in max-heap) is printed first, then the next max-element, etc.**

</details>
