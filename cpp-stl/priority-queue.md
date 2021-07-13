# Priority Queue

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
