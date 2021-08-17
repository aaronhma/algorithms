# Bucket Sort

([Source](https://www.programiz.com/dsa/bucket-sort))

## About

**[Video Explanation](https://www.youtube.com/watch?v=VuXbEb5ywrU&ab_channel=GeeksforGeeks)**

Bucket Sort is a sorting algorithm that uses the scatter & gather approach. We "scatter" the elements into buckets and sort each bucket individually, then "gather" all the elements together.

**Example:**

If we had an array with the values $\{ 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 \}$, here's what the buckets<sup>\*</sup> would look like:

![Image](https://media.geeksforgeeks.org/wp-content/uploads/BucketSort.png)

Now that we have our buckets in **sorted order**, we can "gather" all the elements to produce our sorted array $\{ 0.1234, 0.3434, 0.565, 0.656, 0.665, 0.897 \}$.

<sup>\*</sup> We have $10$ buckets. The first bucket contains elements from $0.0$ to $0.09$, the second bucket contains elements from $0.1$ to $0.19$, etc.

## ℹ️ Tips

-   Bucket sort is mainly useful when the input is uniformly distributed over a range and the elements are floating point values.
-   The stability of Bucket Sort depends on the sorting algorithm used when we sorted each bucket.
-   Bucket Sort's best time complexity is $\theta(n + k) \approx \theta(n)$ and the worst time complexity is $\theta(n^2)$.
