# Suffix Tree

## Background

A suffix tree is a non-linear data structure based on the [trie](../../trie/README.md) data structure. The main goal of a suffix tree is to solve string related problem including, but not limited to, patterning matching, distinct subsets, longest palindrone, etc.

## Suffix Tree Example

If we were to represent "Banana" in a suffix tree, here's what it might look like:

![Image](https://he-s3.s3.amazonaws.com/media/uploads/71cea69.png)

([Source](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/suffix-trees/tutorial/))

But to avoid getting a implicit suffix tree, a special character that is not in the string is appended to the end of the string. So if "\$" was the special character with the word "banana", here's what would look like:

![Image](https://he-s3.s3.amazonaws.com/media/uploads/a55f8db.png)

([Source](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/suffix-trees/tutorial/))

## References

-   [HackerEarth: Suffix Trees](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/suffix-trees/tutorial/)
