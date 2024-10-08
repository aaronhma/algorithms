# Algorithm Notes

[![@aaronhma/algorithms - High Quality Notes for CP](https://img.shields.io/badge/@aaronhma/algorithms-%20high%20quality%20notes%20for%20CP-brightgreen)](https://github.com/aaronhma/algorithms-notes)

<!-- -   Run `prettier --write .` before commit to the repo (Install **prettier** via `brew install prettier`) -->

-   Most pages published after 3/31/21 requires the [MathJax for GitHub](https://chrome.google.com/webstore/detail/mathjax-plugin-for-github/ioemnmodlmafdkllaclgeombjnmnbima) extension to view MathJax blocks.

![Algorithms Image](https://i.ytimg.com/vi/kM9ASKAni_s/maxresdefault.jpg)

###### *([Source](https://www.youtube.com/watch?v=kM9ASKAni_s))*

---

## Contents

-   [**Algorithms**](#algorithms)

    -   [**Graphs**](#graphs)
    -   [**Hashing**](#hashing)
    -   [**Range Query**](#range-query)
    -   [**Sorting**](#sorting)
    -   [**String**](#string)
    -   [**Techniques**](#techniques)

-   [**Data Structure**](#data-structure)

    -   [**Linear Data Structure**](#linear-data-structure)
    -   [**Non-Linear Data Structure**](#non-linear-data-structure)
    -   [**Tree**](#tree)

-   [**Math**](#math)

    -   [**Algebra**](#algebra)
    -   [**Combinatorics**](#combinatorics)
    -   [**Geometry**](#geometry)
    -   [**Linear Algebra**](#linear-algebra)
    -   [**Number Theory**](#number-theory)

-   [**Misc**](#misc)

-   [**Resources**](#resources)

-   [**Techniques**](#techniques)
    -   [**Backtracking**](#backtracking)
    -   [**Divide Conquer**](#divide-conquer)
    -   [**Dynamic Proramming**](#dynamic-proramming)
    -   [**Greedy Algorithm**](#greedy-algorithm)
    -   [**Recursion**](#recursion)
    -   [**Searching**](#searching)

---

### [**Algorithms**](algorithms/README.md)

#### [**Graphs**](algorithms/graphs/README.md)

| ☆   | Name (Content)                                                                                                | C++                                                                                                                                                                                                                        | Python | Editorials                                                                                                                                                                                                                               |
| --- | ------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [0-1 BFS](algorithms/graphs/0-1-bfs-binary/README.md)                                                         | [C++](algorithms/graphs/0-1-bfs-binary/bfs-binary.cpp)                                                                                                                                                                     |        | [cp-algo](https://cp-algorithms.web.app/graph/01_bfs.html)                                                                                                                                                                               |
|     | [A\* (a-star)](algorithms/graphs/a-star-algorithm/README.md)                                                  | [C++](algorithms/graphs/a-star-algorithm/a-star-algorithm.cpp)                                                                                                                                                             |        |                                                                                                                                                                                                                                          |
|     | [Bellman Ford](algorithms/graphs/bellman-ford/README.md)                                                      | [C++](algorithms/graphs/bellman-ford/bellman-ford.cpp)                                                                                                                                                                     |        | [cp-algo](https://cp-algorithms.web.app/graph/bellman_ford.html)                                                                                                                                                                         |
|     | [Breadth First Search (BFS)](algorithms/graphs/breadth-first-search/README.md)                                | [List](algorithms/graphs/breadth-first-search/bfs-list.cpp), [Vector](algorithms/graphs/breadth-first-search/bfs-vector.cpp)                                                                                               |        | [cp-algo](https://cp-algorithms.web.app/graph/breadth-first-search.html)                                                                                                                                                                 |
|     | [Cycle](algorithms/graphs/cycle/README.md)                                                                    | [Negative Weight](algorithms/graphs/cycle/negative-weight.cpp)                                                                                                                                                             |        | [cp-algo](https://cp-algorithms.web.app/graph/finding-negative-cycle-in-graph.html)                                                                                                                                                      |
|     | [Depth First Search (DFS)](algorithms/graphs/depth-first-search/README.md)                                    | [DFS](algorithms/graphs/depth-first-search/dfs.cpp), [Connected Comp](algorithms/graphs/depth-first-search/connected-components.cpp), [Max Island](algorithms/graphs/depth-first-search/max-island-size.cpp)               |        | [cp-algo](https://cp-algorithms.web.app/graph/depth-first-search.html)                                                                                                                                                                   |
|     | [D´Esopo-Pape](algorithms/graphs/desopo-pape/README.md)                                                       | [C++](algorithms/graphs/desopo-pape/desopo-pape.cpp)                                                                                                                                                                       |        | [cp-algo](https://cp-algorithms.web.app/graph/desopo_pape.html)                                                                                                                                                                          |
|     | [Dial](algorithms/graphs/dial/README.md)                                                                      | [C++](algorithms/graphs/dial/dial.cpp)                                                                                                                                                                                     |        | [cp-algo](https://cp-algorithms.web.app/graph/01_bfs.html)                                                                                                                                                                               |
|     | [Dijkstra](algorithms/graphs/dijkstra/README.md)                                                              | [C++](algorithms/graphs/dijkstra/dijkstra.cpp)                                                                                                                                                                             |        | [cp-algo 1](https://cp-algorithms.web.app/graph/dijkstra.html), [cp-algo 2](https://cp-algorithms.web.app/graph/dijkstra_sparse.html), [techie delight](https://www.techiedelight.com/single-source-shortest-paths-dijkstras-algorithm/) |
|     | [Eulerian](algorithms/graphs/eulerian/README.md)                                                              |                                                                                                                                                                                                                            |        | [cp-algo](https://cp-algorithms.web.app/graph/euler_path.html)                                                                                                                                                                           |
|     | [Flood Fill](algorithms/graphs/flood-fill/README.md)                                                          | [C++](algorithms/graphs/flood-fill/flood-fill.cpp)                                                                                                                                                                         |        | [1](https://www.techiedelight.com/flood-fill-algorithm/)                                                                                                                                                                                 |
|     | [Floyd Warshall](algorithms/graphs/floyd-warshall/README.md)                                                  | [C++](algorithms/graphs/floyd-warshall/floyd-warshall.cpp)                                                                                                                                                                 |        | [cp-algo](https://cp-algorithms.web.app/graph/all-pair-shortest-path-floyd-warshall.html), [Techie Delight](https://www.techiedelight.com/pairs-shortest-paths-floyd-warshall-algorithm/)                                                |
|     | [Graph Utilities](algorithms/graphs/graph-utilities/README.md)                                                | [Adj List](algorithms/graphs/graph-utilities/adjacency-list.cpp), [Adj Matrix](algorithms/graphs/graph-utilities/adjacency-matrix.cpp), [Weighted Adj List](algorithms/graphs/graph-utilities/weighted-adjacency-list.cpp) |        |                                                                                                                                                                                                                                          |
|     | [Lowest Common Ancestor (LCA)](algorithms/graphs/lca/README.md)                                               |                                                                                                                                                                                                                            |        | [cp-algo](https://cp-algorithms.web.app/graph/lca.html)                                                                                                                                                                                  |
|     | [LCA - Binary Lifting](algorithms/graphs/lca/binary-lifting/README.md)                                        | [C++](algorithms/graphs/lca/binary-lifting/lca-binary-lifting.cpp)                                                                                                                                                         |        | [cp-algo](https://cp-algorithms.web.app/graph/lca_binary_lifting.html)                                                                                                                                                                   |
|     | [Lee](algorithms/graphs/lee/README.md)                                                                        | [C++](algorithms/graphs/lee/lee.cpp)                                                                                                                                                                                       |        | [Techie Delight](https://www.techiedelight.com/lee-algorithm-shortest-path-in-a-maze/)                                                                                                                                                   |
|     | [Multi Source BFS](algorithms/graphs/multi-source-bfs/README.md)                                              | [C++](algorithms/graphs/multi-source-bfs/multi-source-bfs.cpp)                                                                                                                                                             |        |                                                                                                                                                                                                                                          |
|     | [Spinning Trees](algorithms/graphs/spanning-trees/README.md)                                                  |                                                                                                                                                                                                                            |        |
|     | [Spinning Trees - Kruskal](algorithms/graphs/spanning-trees/kruskal-algorithm/README.md)                      | [C++](algorithms/graphs/spanning-trees/kruskal-algorithm/kruskal.cpp)                                                                                                                                                      |        | [cp-algo](https://cp-algorithms.web.app/graph/mst_kruskal.html), [Techie Delight](https://www.techiedelight.com/kruskals-algorithm-for-finding-minimum-spanning-tree/)                                                                   |
|     | [Kirchhoff Theorem: # of spinning trees](algorithms/graphs/spanning-trees/number-of-spanning-trees/README.md) | [C++](algorithms/graphs/spanning-trees/number-of-spanning-trees/spanning-tree-not-complete-graph.cpp)                                                                                                                      |        | [cp-algo](https://cp-algorithms.web.app/graph/kirchhoff-theorem.html)                                                                                                                                                                    |
|     | [Spinning Trees - Prim](algorithms/graphs/spanning-trees/prim-algorithm/README.md)                            | [C++](algorithms/graphs/spanning-trees/prim-algorithm/prim.cpp)                                                                                                                                                            |        | [cp-algo](https://cp-algorithms.web.app/graph/mst_prim.html)                                                                                                                                                                             |

---

#### [**Hashing**](algorithms/hashing/README.md)

| ☆   | Name (Content)                                                | C++                                                         | Python | Editorials                                                          |
| --- | ------------------------------------------------------------- | ----------------------------------------------------------- | ------ | ------------------------------------------------------------------- |
|     | [String Hashing](algorithms/hashing/string-hashing/README.md) | [C++](algorithms/hashing/string-hashing/string-hashing.cpp) |        | [cp-algo](https://cp-algorithms.web.app/string/string-hashing.html) |

---

#### [**Range Query**](algorithms/range-query/README.md)

@TODO: Aaron

| ☆   | Name (Content) | C++ | Python | Editorials                                              |
| --- | -------------- | --- | ------ | ------------------------------------------------------- |
|     |                |     |        | [cp-algo](https://cp-algorithms.com/sequences/rmq.html) |

---

#### [**Sorting**](algorithms/sorting/README.md)

| ☆   | Name (Content)                                                    | C++                                                                                                                                                 | Python | Editorials                                                                                                                                     |
| --- | ----------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ---------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [Bubble Sort](algorithms/sorting/bubble-sort/README.md)           | [C++](algorithms/sorting/bubble-sort/bubble-sort.cpp)                                                                                               |        | [1](https://www.techiedelight.com/bubble-sort-iterative-recursive/)                                                                            |
|     | [Bucket Sort](algorithms/sorting/bucket-sort/README.md)           | [C++](algorithms/sorting/bucket-sort/bucket-sort.cpp)                                                                                               |        |                                                                                                                                                |
|     | [Counting Sort](algorithms/sorting/counting-sort/README.md)       | [C++](algorithms/sorting/counting-sort/counting-sort.cpp)                                                                                           |        |                                                                                                                                                |
|     | [Heap Sort](algorithms/sorting/heap-sort/README.md)               | [C++](algorithms/sorting/heap-sort/heap-sort.cpp)                                                                                                   |        | [1](https://www.techiedelight.com/heap-sort-place-place-implementation-c-c/)                                                                   |
|     | [Insertion Sort](algorithms/sorting/insertion-sort/README.md)     | [C++](algorithms/sorting/insertion-sort/insertion-sort.cpp)                                                                                         |        | [1](https://www.techiedelight.com/insertion-sort-iterative-recursive/)                                                                         |
|     | [Merge Sort](algorithms/sorting/merge-sort/README.md)             | [C++](algorithms/sorting/merge-sort/merge-sort.cpp)                                                                                                 |        | [1](https://www.techiedelight.com/merge-sort/)                                                                                                 |
| ★★★ | [Quick Sort](algorithms/sorting/quick-sort/README.md)             | [C++](algorithms/sorting/quick-sort/quick-sort.cpp)                                                                                                 |        | [1](//www.techiedelight.com/quicksort/)                                                                                                        |
| ★☆☆ | [Radix Sort](algorithms/sorting/radix-sort/README.md)             | [C++](algorithms/sorting/radix-sort/radix-sort.cpp)                                                                                                 |        |                                                                                                                                                |
|     | [Selection Sort](algorithms/sorting/selection-sort/README.md)     | [C++](algorithms/sorting/selection-sort/selection-sort.cpp)                                                                                         |        | [1](https://www.techiedelight.com/selection-sort-iterative-recursive/), [2](https://www.techiedelight.com/selection-sort-iterative-recursive/) |
|     | [Shell Sort](algorithms/sorting/shell-sort/README.md)             | [C++](algorithms/sorting/shell-sort/shell-sort.cpp)                                                                                                 |        |                                                                                                                                                |
|     | [Topological Sort](algorithms/sorting/topological-sort/README.md) | [w DFS](algorithms/sorting/topological-sort/topological-sort-dfs.cpp), [Kahn's Algorithm (w BFS)](algorithms/sorting/topological-sort/kahn-bfs.cpp) |        | [cp-algo](https://cp-algorithms.web.app/graph/topological-sort.html)                                                                           |
|     | [Tree Sort](algorithms/sorting/tree-sort/README.md)               | [C++](algorithms/sorting/tree-sort/tree-sort.cpp)                                                                                                   |        |                                                                                                                                                |

---

#### [**String**](algorithms/strings/README.md)

| ☆   | Name (Content)                                                                                      | C++                                                               | Features                            | Editorials                                                           |
| --- | --------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------- | ----------------------------------- | -------------------------------------------------------------------- |
| ★★★ | [Knuth-Morris-Pratt (KMP)](algorithms/strings/kmp/README.md)                                        | [C++](algorithms/strings/kmp/kmp.cpp)                             |                                     | [cp-algo](https://cp-algorithms.web.app/string/prefix-function.html) |
| ★   | [Main-Lorentz Algorithm (Finding repetitions)](algorithms/strings/main-lorentz-algorithm/README.md) | [C++](algorithms/strings/main-lorentz-algorithm/main-lorentz.cpp) |                                     | [cp-algo](https://cp-algorithms.web.app/string/main_lorentz.html)    |
| ★★★ | [Manacher's Algorithm](algorithms/strings/manacher-algorithm/README.md)                             | [C++](algorithms/strings/manacher-algorithm/manacher.cpp)         | Finding all sub-palindromes in O(N) | [cp-algo](https://cp-algorithms.web.app/string/manacher.html)        |
| ★★★ | [Rabin Karp](algorithms/strings/rabin-karp/README.md)                                               | [C++](algorithms/strings/rabin-karp/rabin-karp.cpp)               |                                     | [cp-algo](https://cp-algorithms.web.app/string/rabin-karp.html)      |
| ★★★ | [Z Algorithm](algorithms/strings/z-algorithm/README.md)                                             | [C++](algorithms/strings/z-algorithm/z-algorithm.cpp)             |                                     | [cp-algo](https://cp-algorithms.web.app/string/z-function.html)      |

| ☆   | String Problems                                                | C++                                                          | Python | Editorials |
| --- | -------------------------------------------------------------- | ------------------------------------------------------------ | ------ | ---------- |
|     | [Spy String](algorithms/strings/problems/spy-string/README.md) | [C++](algorithms/strings/problems/spy-string/spy-string.cpp) |        |            |

---

#### [**Techniques**](algorithms/techniques/README.md)

| ☆   | General Techniques (String, Number, etc)                                                         | C++                                                                                            | Python | Editorials                                                                                                                                              |
| --- | ------------------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------- | ------ | ------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [Longest Increasing Subsequence](algorithms/techniques/longest-increasing-subsequence/README.md) | [C++](algorithms/techniques/longest-increasing-subsequence/longest-increasing-subsequence.cpp) |        | [Tech Delight](https://www.techiedelight.com/longest-increasing-subsequence/)                                                                           |
|     | [Permutations](algorithms/techniques/permutations/heap/README.md)                                | [Heap's Algorithm](algorithms/techniques/permutations/heap/heap.cpp)                           |        | [wiki](https://en.wikipedia.org/wiki/Heap%27s_algorithm), [Geeks For Geeks](https://www.geeksforgeeks.org/heaps-algorithm-for-generating-permutations/) |

---

### [**Data Structure**](data-structure/README.md)

#### [**Linear Data Structure**](data-structure/linear/README.md)

| ☆   | Name (Content)                                                   | C++                                                                                                                                                                                                       | Python | Editorials                                                             |
| --- | ---------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ---------------------------------------------------------------------- |
|     | [Array](data-structure/linear/array/README.md)                   | [C++](data-structure/linear/array/array.cpp)                                                                                                                                                              |        |                                                                        |
|     | [Bitset](data-structure/linear/bitset/README.md)                 |                                                                                                                                                                                                           |        |                                                                        |
|     | [Deque](data-structure/linear/deque/README.md)                   |                                                                                                                                                                                                           |        |                                                                        |
|     | [Linked List](data-structure/linear/linked-list/README.md)       | [C++](data-structure/linear/linked-list/linked-list.cpp)                                                                                                                                                  |        |                                                                        |
|     | [Matrix](data-structure/linear/matrix/README.md)                 | [Max Square](data-structure/linear/matrix/max-square/README.md), [Max Submatrix](data-structure/linear/matrix/max-submatrix/README.md), [Range Query](data-structure/linear/matrix/range-query/README.md) |        |                                                                        |
|     | [Priority Queue](data-structure/linear/priority-queue/README.md) | [C++](data-structure/linear/priority-queue/priority-queue.cpp)                                                                                                                                            |        |                                                                        |
|     | [Queue](data-structure/linear/queue/README.md)                   | [C++](data-structure/linear/queue/queue.cpp)                                                                                                                                                              |        |                                                                        |
|     | [Sparse Table](data-structure/linear/sparse-table/README.md)     | [C++](data-structure/linear/sparse-table/sparse-table.cpp)                                                                                                                                                |        | [cp-algo](https://cp-algorithms.com/data_structures/sparse-table.html) |
|     | [Stack](data-structure/linear/stack/README.md)                   | [C++](data-structure/linear/stack/stack.cpp)                                                                                                                                                              |        |                                                                        |

#### [**Non-Linear Data Structure**](data-structure/non-linear/README.md)

| ☆   | Name (Content)                                                               | C++                                                                        | Python | Editorials                                                                                                                                                                      |
| --- | ---------------------------------------------------------------------------- | -------------------------------------------------------------------------- | ------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [Disjoint Set](data-structure/non-linear/disjoint-set/README.md)             | [C++](data-structure/non-linear/disjoint-set/disjoint-set.cpp)             |        | [cp-algo](https://cp-algorithms.com/data_structures/disjoint_set_union.html), [Techie Delight](https://www.techiedelight.com/disjoint-set-data-structure-union-find-algorithm/) |
|     | [Hash Map](data-structure/non-linear/hash-map/README.md)                     | [C++](data-structure/non-linear/hash-map/hash-map.cpp)                     |        |                                                                                                                                                                                 |
|     | [Heap](data-structure/non-linear/heap/README.md)                             | [C++](data-structure/non-linear/heap/heap.cpp)                             |        |                                                                                                                                                                                 |
|     | [LRU Cache](data-structure/non-linear/lru-cache/README.md)                   | [C++](data-structure/non-linear/lru-cache/lru-cache.cpp)                   |        |                                                                                                                                                                                 |
|     | [Map](data-structure/non-linear/map/README.md)                               | [C++](data-structure/non-linear/map/map.cpp)                               |        |                                                                                                                                                                                 |
|     | [Multi Set](data-structure/non-linear/multi-set/README.md)                   | [C++](data-structure/non-linear/multi-set/multi-set.cpp)                   |        |                                                                                                                                                                                 |
|     | [Pair](data-structure/non-linear/pair/README.md)                             |                                                                            |        |                                                                                                                                                                                 |
|     | [Policy Based Data Structure](data-structure/non-linear/pbds/README.md)      |                                                                            |        |                                                                                                                                                                                 |
|     | [Set](data-structure/non-linear/set/README.md)                               | [C++](data-structure/non-linear/set/set.cpp)                               |        |                                                                                                                                                                                 |
|     | [Sqrt Decomposition](data-structure/non-linear/sqrt-decomposition/README.md) | [C++](data-structure/non-linear/sqrt-decomposition/sqrt-decomposition.cpp) |        |                                                                                                                                                                                 |
|     | [Trie](data-structure/non-linear/trie/README.md)                             | [C++](data-structure/non-linear/trie/trie.cpp)                             |        |                                                                                                                                                                                 |
|     | [Tuple](data-structure/non-linear/tuple/README.md)                           | [C++](data-structure/non-linear/tuple/tuple.cpp)                           |        |                                                                                                                                                                                 |
|     | [Unordered Map](data-structure/non-linear/unordered-map/README.md)           | [C++](data-structure/non-linear/unordered-map/unordered-map.cpp)           |        |                                                                                                                                                                                 |
|     | [Unordered Set](data-structure/non-linear/unordered-set/README.md)           | [C++](data-structure/non-linear/unordered-set/unordered-set.cpp)           |        |                                                                                                                                                                                 |

---

#### [**Tree**](data-structure/trees/README.md)

| ☆   | Name (Content)                                                                    | C++                                                                                                                                                                                                                                | Python | Editorials                                                                       |
| --- | --------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | -------------------------------------------------------------------------------- |
|     | [AVL Tree](data-structure/trees/avl-tree/README.md)                               | [C++](data-structure/trees/avl-tree/avl-tree.cpp)                                                                                                                                                                                  |        |                                                                                  |
|     | [B Tree](data-structure/trees/b-tree/README.md)                                   | [C++](data-structure/trees/b-tree/b-tree.cpp)                                                                                                                                                                                      |        |                                                                                  |
|     | [Binary Search Tree](data-structure/trees/binary-search-tree/README.md)           | [C++](data-structure/trees/binary-search-tree/bst.cpp)                                                                                                                                                                             |        |                                                                                  |
|     | [Binary Tree](data-structure/trees/binary-tree/README.md)                         | [C++](data-structure/trees/binary-tree/binary-tree.cpp)                                                                                                                                                                            |        |                                                                                  |
|     | [Cartesian Tree (Treap)](data-structure/trees/cartesian-tree/README.md)           | [C++](data-structure/trees/cartesian-tree/cartesian-tree.cpp)                                                                                                                                                                      |        | [cp-algo](https://cp-algorithms.com/data_structures/treap.html)                  |
|     | [Fenwick Tree](data-structure/trees/fenwick-tree/README.md)                       | [Fenwick Tree Max](data-structure/trees/fenwick-tree/fenwick-tree-max.cpp), [Fenwick Tree Min](data-structure/trees/fenwick-tree/fenwick-tree-min.cpp), [Fenwick Tree Sum](data-structure/trees/fenwick-tree/fenwick-tree-sum.cpp) |        | [cp-algo](https://cp-algorithms.com/data_structures/fenwick.html)                |
|     | [N-ary Tree](data-structure/trees/n-ary-tree/README.md)                           | [C++](data-structure/trees/n-ary-tree/n-ary-tree.cpp)                                                                                                                                                                              |        |                                                                                  |
|     | [Segment Tree](data-structure/trees/segment-tree/README.md)                       | [C++](data-structure/trees/segment-tree/segment-tree.cpp)                                                                                                                                                                          |        | [cp-algo](https://cp-algorithms.com/data_structures/segment_tree.html)           |
|     | [Sqrt Tree](data-structure/trees/sqrt-tree/README.md)                             | [C++](data-structure/trees/sqrt-tree/sqrt-tree.cpp)                                                                                                                                                                                |        | [cp-algo](https://cp-algorithms.com/data_structures/sqrt-tree.html)              |
|     | [Suffix Tree](data-structure/trees/suffix-tree/README.md)                         | [C++](data-structure/trees/suffix-tree/suffix-tree.cpp)                                                                                                                                                                            |        |                                                                                  |
|     | [Tree](data-structure/trees/tree/README.md)                                       | [C++](data-structure/trees/tree/tree.cpp)                                                                                                                                                                                          |        |                                                                                  |
|     | [Tree Traversals (Inorder)](data-structure/trees/tree-traversals/in-order.md)     | [C++](data-structure/trees/tree-traversals/in-order.cpp)                                                                                                                                                                           |        | [1](https://www.techiedelight.com/inorder-tree-traversal-iterative-recursive/)   |
|     | [Tree Traversals (Preorder)](data-structure/trees/tree-traversals/pre-order.md)   | [C++](data-structure/trees/tree-traversals/pre-order.cpp)                                                                                                                                                                          |        | [1](https://www.techiedelight.com/preorder-tree-traversal-iterative-recursive/)  |
|     | [Tree Traversals (Postorder)](data-structure/trees/tree-traversals/post-order.md) | [C++](data-structure/trees/tree-traversals/post-order.cpp)                                                                                                                                                                         |        | [1](https://www.techiedelight.com/postorder-tree-traversal-iterative-recursive/) |

---

### [**Math**](math/README.md)

#### [**Algebra**](math/algebra/README.md)

| ☆   | Name (Content) | C++     | Python | Editorials |
| --- | -------------- | ------- | ------ | ---------- |
|     |                | [C++]() |        |            |

---

#### [**Combinatorics**](math/combinatorics/README.md)

| ☆   | Name (Content) | C++ | Python | Editorials |
| --- | -------------- | --- | ------ | ---------- |
|     |                |     |        |            |

---

#### [**Geometry**](math/geometry/README.md)

| ☆   | Name (Content) | C++ | Python | Editorials |
| --- | -------------- | --- | ------ | ---------- |
|     |                |     |        |            |

---

#### [**Linear Algebra**](math/linear-algebra/README.md)

| ☆   | Name (Content) | C++ | Python | Editorials |
| --- | -------------- | --- | ------ | ---------- |
|     |                |     |        |            |

---

#### [**Number Theory**](math/number-theory/README.md)

@TODO: Aaron - GCD, inverse of the number using extended euler's algorithm, fast power, prime number, Modular Exponentiation, Sieve of Eratosthenes, Fermat’s theorem, Miller Rabin

| ☆   | Name (Content) | C++ | Python | Editorials |
| --- | -------------- | --- | ------ | ---------- |
|     |                |     |        |            |

---

### [**Misc**](misc/README.md)

| ☆   | Name (Content)                                              | C++ | Python | Editorials                                                                                    |
| --- | ----------------------------------------------------------- | --- | ------ | --------------------------------------------------------------------------------------------- |
|     | [Efficiency](misc/efficiency.md)                            | -   | -      |                                                                                               |
|     | [Kadane Algorithm (Maximum Sum Subarray Problem)]()         |     |        | [1](https://www.techiedelight.com/maximum-subarray-problem-kadanes-algorithm/)                |
|     | [Floyd Cycle Detection Algorithm]()                         |     |        | [1](https://www.techiedelight.com/detect-cycle-linked-list-floyds-cycle-detection-algorithm/) |
|     | [Approximation Algorithm]()                                 |     |        |                                                                                               |
|     | [Euclid's Extended Algorithm]()                             |     |        |                                                                                               |
|     | [Matrix multiplication]()                                   |     |        |                                                                                               |
|     | [Factorial]()                                               |     |        |                                                                                               |
|     | [Statistical Method]()                                      |     |        |                                                                                               |
|     | [Probabilistic Methods]()                                   |     |        |                                                                                               |
|     | [Max-flow min cut theorem: Ford-fulkerson OR Edmond-Karp]() |     |        |                                                                                               |

---

### [**Resources**](resources/README.md)

| ☆   | Name (Content)                                      | Editorials |
| --- | --------------------------------------------------- | ---------- |
|     | [Competition Sites](resources/competition-sites.md) |            |

---

### [**Techniques**](techniques/README.md)

#### [**Backtracking**](techniques/backtracking/README.md)

| ☆   | Name (Content)        | C++ | Python | Editorials                           |
| --- | --------------------- | --- | ------ | ------------------------------------ |
|     | What is Backtracking? |     |        | [1](backtracking-algorithm/about.md) |

---

#### [**Divide Conquer**](techniques/divide-conquer/README.md)

| ☆   | Name (Content)            | C++ | Python | Editorials |
| --- | ------------------------- | --- | ------ | ---------- |
|     | What is Divide & Conquer? |     |        |            |

#### [**Dynamic Proramming**](techniques/dp/README.md)

| ☆   | Name (Content)                               | C++                                        | Python | Editorials |
| --- | -------------------------------------------- | ------------------------------------------ | ------ | ---------- |
|     | [Knapsack](techniques/dp/knapsack/README.md) | [C++](techniques/dp/knapsack/knapsack.cpp) |        |            |

---

### [**Greedy Algorithm**](techniques/greedy/README.md)

| ☆   | Name (Content) | C++     | Python | Editorials |
| --- | -------------- | ------- | ------ | ---------- |
|     |                | [C++]() |        |            |

---

#### [**Recursion**](techniques/recursion/README.md)

| ☆   | Name (Content)     | C++ | Python | Editorials |
| --- | ------------------ | --- | ------ | ---------- |
|     | What is Recursion? |     |        |            |

---

#### [**Searching**](techniques/searching/README.md)

| ☆   | Name (Content)                                            | C++                                              | Python | Editorials                                        |
| --- | --------------------------------------------------------- | ------------------------------------------------ | ------ | ------------------------------------------------- |
|     | [Binary Search](searching/binary-search/binary-search.md) | [C++](searching/binary-search/binary-search.cpp) |        | [1](https://www.techiedelight.com/binary-search/) |
|     | [Hash Search](searching/hash-search/hash-search.md)       | [C++](searching/hash-search/hash-search.cpp)     |        | [1](https://www.techiedelight.com/Tags/hashing/)  |
|     | [Linear Search](searching/linear-search/linear-search.md) | [C++](searchin/linear-search/linear-search.cpp)  |        | [1](https://www.techiedelight.com/Tags/hashing/)  |

---
