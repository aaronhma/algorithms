# LRU Cache

# Background

A Least Recently Used (LRU) Cache organizes items based on order of use (see picture below).

![Image](https://www.interviewcake.com/images/svgs/lru_cache__doubly_linked_list.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/lru-cache))

## Pros & Cons of LRU Cache

-   Pros:
    -   Fast accesses - O(1)
    -   Fast updates - O(1)

*   Cons:
    -   Space intensive - O(n)

## LRU Cache Operations

-   `get` - gets an elements from the cache
-   `put` - puts an element if the cache is not full, if the cache is full, deletes the least recently used element

## Why Use a LRU Cache?

Let's say that you're a business owner and manage a website. Whenever someone goes to your website, you open the HTML file of your website, and send it back to the user. But the problem is that it's just **too slow**. What if, you only do this once, then store it into the user's cache?

If you store your website data into the user's cache, reading from the user's cache is way **faster** than reading from your server.

## LRU Cache Complexity Analysis

| Operation   | Worst Case |
| ----------- | ---------- |
| LRU Item    | O(1)       |
| Access Item | O(1)       |

-   Space complexity: O(n)

## References

-   [Interview Cake: LRU Cache](https://www.interviewcake.com/concept/cpp/lru-cache?)
