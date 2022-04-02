# Permutations

## About

A permutation is an arrangement of $n$ numbers in an array.

> **FORMULA:** The # of permutations in an array of $n$ numbers is $n!$.

> ***SIDENOTE:*** ***[Heap's Algorithm for Fast Permutation Generation](https://github.com/aaronhma/algorithms/tree/master/algorithms/techniques/permutations/heap)***

Sometimes a permutation is illustrated by showing the set before and after the permutation, with an arrow from each element to its new position. For example, the permutations {$1,3,2$} and {$2,1,3$} can be illustrated as follows:

![Image](http://www.efgh.com/math/algebra/permutations1.gif)

The identity permutation of a set is the permutation that leaves the set unchanged, or the function which maps each element to itself. In our example, the identity permutation is {$1,2,3$}.

> **WARNING:** We're assuming the permutation {$1, 3, 2$} is $A$ and {$2, 1, 3$} is $B$.

## Composition of Two Permuations (Merge)

The composition of two permutations of the same set is just the composition of the associated functions. For example, the permutations {$1,3,2$} and {$2,1,3$} can be composed by tracing the destination of each element.

![Image](http://www.efgh.com/math/algebra/permutations2.gif)

> ***SIDENOTE:*** "$\circ$" is the notation for the composition (merging) of two permutations.

In the picture above, the left side is $B \circ A$ and the right side is $A \circ B$. $B \circ A$ means "apply $A$ then $B$" and $AB$ means "apply $B$ then $A$".

> **WARNING:** The composition of two permutations is not commutative, that is, $A \circ B \ne B \circ A$.

> ***SIDENOTE:*** The composition of two permutations is commutative if one of the permutations is the *identity permutation* $I$. Then, $I \circ P = P \circ I = P$, where $P$ is the permutation.

## Even & Odd Permutation

* An even permutation is a permutation that is obtained with an even # of $2$-element swaps.
* An odd permutation is a permutation that is obtained with an odd # of $2$-element swaps.

## Example: The Fifteen-Tile Puzzle

A popular puzzle involves a set of fifteen sliding tiles in a $4 \times 4$ square:

```
       1   2   3   4
       5   6   7   8
       9  10  11  12
      13  14  15
```

The sixteenth position is blank. The tiles can be rearranged by moving adjacent tiles into the blank. Through repeated moves of this kind, we can rearrange the tiles, as in this example:

```
       1   2   3   4      1   2   3   4      1   2   3   4
       5   6   7   8      5   6   7   8      5   6   7   8
       9  10  11  12      9  10  11  12      9  10      12
      13  15  14         13  15      14     13  15  11  14

       1   2   3   4      1   2   3   4
       5   6   7   8      5   6   7   8
       9  10  12          9  10  12  14
      13  15  11  14     13  15  11
```

Suppose we want to obtain the following result:

```
       1   2   3   4
       5   6   7   8
       9  10  11  12
      13  15  14
```

It is easy to show that the current game state makes winning impossible. Each arrangement is a permutation of sixteen items, where the blank space is considered as the sixteenth item. Each move involves the exchange of a tile with the blank space. The number of moves must be even, because the space must move up and down equal numbers of spaces, and right and left equal numbers of spaces, if it is to be returned to its original position in the lower right corner.

The desired result is an odd permutation, since it results from a single exchange. Hence it cannot be reached in the specified manner.

## Resources

- [Further Reading + Proof](http://www.efgh.com/math/algebra/permutations.htm)
