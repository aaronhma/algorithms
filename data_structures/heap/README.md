# Heap

<div class="screen-shader spin-load"></div>

## Background

A heap is a binary tree where the root (top element) is always the smallest or the biggest (see: Min-heap vs. Max-heap).

<image-viewport-v2 media="src" src="https://www.interviewcake.com/images/svgs/heap_concept_page_diagrams__binary_heap.svg?bust=206">

![Image](https://www.interviewcake.com/images/svgs/heap_concept_page_diagrams__binary_heap.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/heap))

</image-viewport-v2>

## Min-heap vs. Max-heap

A min-heap is where the root (top element) is always the smallest, and the bottom elements are the biggest values.

On the other hand, a max-heap makes the root the biggest value and the bottom elements the smallest values.

## Complexity Analysis

- Min-heap:
  | Operation | Worst Case |
  | ---------------- | ---------- |
  | Retrieve Minimum | O(1) |
  | Remove Minimum | O(log n) |
  | Insertion | O(log n) |
  | Heapify | O(n) |

- Max-heap:
  | Operation | Worst Case |
  | ---------------- | ---------- |
  | Retrieve Maximum | O(1) |
  | Remove Maximum | O(log n) |
  | Insertion | O(log n) |
  | Heapify | O(n) |

* Space complexity: O(n)

## Pros & Cons of a Heap

- Pros:

  - Smallest element quick access - O(1) while other operations are O(log n)
  - Space efficient - most heaps are implemented with vectors

- Cons:
  - Easy access to smallest item, but finding other items are O(n) time

## References

- [Interview Cake: Heap](https://www.interviewcake.com/concept/cpp/heap)
