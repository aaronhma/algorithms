# Priority Queue

## Background

![Image](https://cdn.programiz.com/sites/tutorial2program/files/Introduction.png)
([Source](https://www.programiz.com/dsa/priority-queue))

A priority queue uses a [heap](../heap/README.md) which supports the following operations:

-   `push` - Pushes a new element to the heap
-   `pop` - Deletes the highest priority element (max element)
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
