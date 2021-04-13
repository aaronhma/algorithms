# Amortized Time Complexity

## About

The _amortized time_ of an algorithm is the way we express the time complexity of an algorithm that has a very bad time **once in a while**.

## Example: Adding elements to an Array

Let's say we have an array $arr$ that can store $6$ elements and $3$ elements are already used. If we were to add another element, we can do this in $\theta(1)$ time:

![Image](https://miro.medium.com/max/1400/1*xzHn_L51zW7isiYY72cEHw.png)

But when we have a full vector and need to add a new element, this takes $\theta(n)$, as we need to copy the old array into a new contigous block of memory that is twice the size of the original array then add the new element:

![Image](https://miro.medium.com/max/1400/1*v8uMYv8IWGeeApFzquTvdg.png)

> _"But once it happens, it won't happen again for so long that the cost is "amortized". - (CTCI 6th Edition)_

## So what is the time complexity of adding an element to a `vector`?

The insertion takes $\theta(n)$ time when the capacity has been reached, while insertion when the capacity has **not** been reached takes $\theta(1)$ time. Because for most cases adding data to our `vector` takes $\theta(1)$ time, we say that $\theta(n)$ is "amortized" and the time complexity is $\theta(1)$.

## Proof

The `arr.push_back(x)` function in C++ runs in $\theta(1)$ time. Why is that?

If we had a vector with the initial capacity to be $1$, then the capacities will be doubled (when the size limit is reached) in the order $1, 2, 4, 8, 16, x$. We need to copy $1, 2, 4, 8, 16, x$ items when the array is doubled, so the time complexity is $\theta(1 + 2 + 4 + 8 + 16 + n) \approx \theta(2n) \approx \theta(n)$. So in other words, insertion takes $\theta(n)$ when the capacity has been reached and the amortized time is $\theta(1)$. Thus, we say that `arr.push_back(x)` runs in $\theta(1)$ time.
