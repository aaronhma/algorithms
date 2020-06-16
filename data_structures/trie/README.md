# Trie

## Background

A trie is a [tree](../tree/README.md) data structure that is highly optimized for searching, because it can store strings in very small size (see picture below).

![Image](https://www.interviewcake.com/images/svgs/trie_with_three_strings.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/trie))

In the picture above, the string "Mari" is stored only once even though it appears in two strings: "Maria" and "Mario".

## Word Endings in a Trie

If there is 2 words and both words are a prefix of each other, here's what a typical trie would look like:

<image-viewport>

![Image](https://www.interviewcake.com/images/svgs/trie_with_two_strings.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/trie))

</image-viewport>

Based on the above trie, it looks like "Mariana" is the only word in the trie, even though there is 2 words ("Maria" and "Mariana"). To avoid this type of confusion, most tries adds a special character to the end of every word. If "." was the special character, here's what the tree might look like:

<image-viewport>

![Image](https://www.interviewcake.com/images/svgs/trie_with_markers.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/trie))

</image-viewport>

## Runtime of a Trie

| Operation     | Worst Case | Average | Best |
| ------------- | ---------- | ------- | ---- |
| Insert        | O(k)       | O(k)    | O(1) |
| Lookup/Search | O(k)       | O(k)    | O(1) |

## Pros & Cons of Trie

- Pros:

  - Efficient prefix queries

- Cons:

  - Not standard, as **most** languages (including C++) don't have a built-in trie implementation.

**NOTE:**

- _k_ is the length of the string that you either search or insert

## When Should You Use a Trie?

Because a trie is highly optimized for searching, tries is most commonly used when you want to take a partial value and return a collection of possible completed values (The Auto Completetion Problem).

```
SOURCE: https://hackernoon.com/practical-data-structures-for-frontend-applications-when-to-use-tries-5428a565eba4

Tries are commonly used to implement things like:

- Autocompletes / typeaheads
- Search
- Spell checkers
- Sorting
- IP Addresses,
- Phone Numbers,
- Objects (You can search properties on an object),
- and more!
```

## Case Study: Radix Trees

A radix tree is basically a tree, except for it saves memory by combining nodes together if they only contain one child (see picture below).

![Image](https://www.interviewcake.com/images/svgs/radix_tree_with_three_strings.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/trie))

## References

- [Interview Cake: Trie](https://www.interviewcake.com/concept/cpp/trie)
- [HackerNoon: When to Use Tries](https://hackernoon.com/practical-data-structures-for-frontend-applications-when-to-use-tries-5428a565eba4)
