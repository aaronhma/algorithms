# Algorithms Notes

![Algorithms CI](https://github.com/aaronhma/algorithms/workflows/Algorithms%20CI/badge.svg) [![Website Status: Passing](https://img.shields.io/badge/website-passing-brightgreen)](https://github.com/aaronhma/algorithms-notes)

![Algorithms Image](https://i.ytimg.com/vi/kM9ASKAni_s/maxresdefault.jpg)

([Source](https://www.youtube.com/watch?v=kM9ASKAni_s))

---

## Contents

-   [**Algorithms**](#algorithms)

    -   [**Graphs**](#graphs)
    -   [**Strings**](#strings)
    -   [**Tree Algorithm**](#tree-algorithm)

-   [**C++ STL**](#c++-stl)

-   [**Data Structure**](#data-structure)

    -   [Linear Data Structure](#linear-data-structure)
    -   [Non-Linear Data Structure](#non-linear-data-structure)

-   [**Math**](#math)

    -   [**Geometry**](#geometry)

-   [**Misc**](#misc)

-   [**Resources**](#resources)

-   [**Techniques**](#techniques)
    -   [**Backtracking**](#backtracking)
    -   [**Divide Conquer**](#divide-conquer)
    -   [**Dynamic Proramming**](#dynamic-proramming)
    -   [**Greedy Algorithm**](#greedy-algorithm)
    -   [**Hashing**](#hashing)
    -   [**Recursion**](#recursion)
    -   [**Searching**](#searching)
    -   [**Sorting**](#sorting)

---

### [**Algorithms**](algorithms/README.md)

#### [**Graphs**](algorithms/graphs/README.md)

| ☆   | Name (Content)                                                                 | C++                                                                                                                                                                                                           | Python | Editorials                                                                                                                                                                                                                       |
| --- | ------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [0-1 BFS](algorithms/graphs/0-1-bfs-binary/README.md)                          | [C++](algorithms/graphs/0-1-bfs-binary/bfs-binary.cpp)                                                                                                                                                        |        | [cp-algo](https://cp-algorithms.com/graph/01_bfs.html)                                                                                                                                                                           |
|     | [Bellman Ford](algorithms/graphs/bellman-ford/README.md)                       | [C++](algorithms/graphs/bellman-ford/bellman-ford.cpp)                                                                                                                                                        |        | [cp-algo](https://cp-algorithms.com/graph/bellman_ford.html)                                                                                                                                                                     |
|     | [Breadth First Search (BFS)](algorithms/graphs/breadth-first-search/README.md) | [List](algorithms/graphs/breadth-first-search/bfs-list.cpp), [Vector](algorithms/graphs/breadth-first-search/bfs-vector.cpp), [Multi Source BFS](algorithms/graphs/breadth-first-search/multi-source-bfs.cpp) |        | [cp-algo](https://cp-algorithms.com/graph/breadth-first-search.html)                                                                                                                                                             |
|     | [Depth First Search (DFS)](algorithms/graphs/depth-first-search/README.md)     | [DFS](algorithms/graphs/depth-first-search/dfs.cpp), [Connected Comp](algorithms/graphs/depth-first-search/connected-components.cpp), [Max Island](algorithms/graphs/depth-first-search/max-island-size.cpp)  |        | [cp-algo](https://cp-algorithms.com/graph/depth-first-search.html)                                                                                                                                                               |
|     | [D´Esopo-Pape algorithm](algorithms/graphs/desopo-pape/README.md)              | [C++](algorithms/graphs/desopo-pape/desopo-pape.cpp)                                                                                                                                                          |        | [cp-algo](https://cp-algorithms.com/graph/desopo_pape.html)                                                                                                                                                                      |
|     | [Dijkstra](algorithms/graphs/dijkstra/README.md)                               | [C++](algorithms/graphs/dijkstra/dijkstra.cpp)                                                                                                                                                                |        | [cp-algo 1](https://cp-algorithms.com/graph/dijkstra.html), [cp-algo 2](https://cp-algorithms.com/graph/dijkstra_sparse.html), [techie delight](https://www.techiedelight.com/single-source-shortest-paths-dijkstras-algorithm/) |
|     | [Flood Fill](algorithms/graphs/flood-fill/README.md)                           | [C++](algorithms/graphs/flood-fill/flood-fill.cpp)                                                                                                                                                            |        | [1](https://www.techiedelight.com/flood-fill-algorithm/)                                                                                                                                                                         |
|     | [Floyd Warshall](algorithms/graphs/floyd-warshall/README.md)                   | [C++](algorithms/graphs/floyd-warshall/floyd-warshall.cpp)                                                                                                                                                    |        | [cp-algo](https://cp-algorithms.com/graph/all-pair-shortest-path-floyd-warshall.html) [Techie Delight](https://www.techiedelight.com/pairs-shortest-paths-floyd-warshall-algorithm/)                                                                                                                                                |
|     | [Graph Utilities](algorithms/graphs/graph-utilities/README.md)                 | [Adj List](algorithms/graphs/graph-utilities/adjacency-list.cpp), [Adj Matrix](algorithms/graphs/graph-utilities/adjacency-matrix.cpp)                                                                        |        |                                                                                                                                                                                                                                  |
|     | [Kruskal](algorithms/graphs/kruskal-algorithm/README.md)                               | [C++](algorithms/graphs/kruskal-algorithm/kruskal.cpp)                                                                                                                                                                          |        | [cp-algo](https://cp-algorithms.com/graph/mst_kruskal.html)     [Techie Delight](https://www.techiedelight.com/kruskals-algorithm-for-finding-minimum-spanning-tree/)                                                                                                                                                    |
|     | [Lee](algorithms/graphs/lee/README.md)                               | [C++](algorithms/graphs/lee/lee.cpp)                                                                                                                                                                          |        | [1](https://www.techiedelight.com/lee-algorithm-shortest-path-in-a-maze/)                                                                                                                                                        |
|     | [Prim](algorithms/graphs/prim-algorithm/README.md)                               | [C++](algorithms/graphs/prim-algorithm/prim.cpp)                                                                                                                                                                          |        | [cp-algo](https://cp-algorithms.com/graph/mst_prim.html)                                                                                                                                                        |

---

#### [**Strings**](algorithms/strings/README.md)

| ☆   | Name (Content)                                               | C++                                                   | Python | Editorials                                                       |
| --- | ------------------------------------------------------------ | ----------------------------------------------------- | ------ | ---------------------------------------------------------------- |
| ★★★ | [Knuth-Morris-Pratt (KMP)](algorithms/strings/kmp/README.md) | [C++](algorithms/strings/kmp/kmp.cpp)                 |        | [cp-algo](https://cp-algorithms.com/string/prefix-function.html) |
| ★★★ | [Rabin Karp](algorithms/strings/rabin-karp/README.md)        | [C++](algorithms/strings/rabin-karp/rabin-karp.cpp)   |        | [cp-algo](https://cp-algorithms.com/string/rabin-karp.html)      |
|     | [Spy String](algorithms/strings/spy-string/README.md)        | [C++](algorithms/strings/spy-string/spy-string.cpp)   |        |                                                                  |
| ★★★ | [Z Algorithm](algorithms/strings/z-algorithm/README.md)      | [C++](algorithms/strings/z-algorithm/z-algorithm.cpp) |        | [cp-algo](https://cp-algorithms.com/string/z-function.html)      |

---

#### [**Tree Algorithm**](algorithms/tree-algorithm/README.md)

| ☆   | Name (Content)                                                                | C++                                                             | Python | Editorials                                                                       |
| --- | ----------------------------------------------------------------------------- | --------------------------------------------------------------- | ------ | -------------------------------------------------------------------------------- |
|     | [AVL Tree](tree-algorithm/avl-tree/avl-tree.md)                               | [C++](tree-algorithm/avl-tree/avl-tree.cpp)                     |        |                                                                                  |
|     | [B Tree](tree-algorithm/b-tree/b-tree.md)                                     | [C++](tree-algorithm/b-tree/b-tree.cpp)                         |        |                                                                                  |
|     | [Binary Search Tree](tree-algorithm/binary-search-tree/binary-search-tree.md) | [C++](tree-algorithm/binary-search-tree/binary-search-tree.cpp) |        |                                                                                  |
|     | [Binary Tree](tree-algorithm/binary-tree/binary-tree.md)                      | [C++](tree-algorithm/binary-tree/binary-tree.cpp)               |        |                                                                                  |
|     | [N-ary Tree](tree-algorithm/n-ary-tree/n-ary-tree.md)                         | [C++](tree-algorithm/n-ary-tree/n-ary-tree.cpp)                 |        |                                                                                  |
|     | [Segment Tree](tree-algorithm/segment-tree/segment-tree.md)                   | [C++](tree-algorithm/segment-tree/segment-tree.cpp)             |        |                                                                                  |
|     | [Suffix Tree](tree-algorithm/suffix-tree/suffix-tree.md)                      | [C++](tree-algorithm/suffix-tree/suffix-tree.cpp)               |        |                                                                                  |
|     | [Tree](tree-algorithm/tree/tree.md)                                           | [C++](tree-algorithm/tree/tree.cpp)                             |        |                                                                                  |
|     | [Tree Traversals (Inorder)](tree-algorithm/tree-traversals/in-order.md)       | [C++](tree-algorithm/tree-traversals/in-order.cpp)              |        | [1](https://www.techiedelight.com/inorder-tree-traversal-iterative-recursive/)   |
|     | [Tree Traversals (Preorder)](tree-algorithm/tree-traversals/pre-order.md)     | [C++](tree-algorithm/tree-traversals/pre-order.cpp)             |        | [1](https://www.techiedelight.com/preorder-tree-traversal-iterative-recursive/)  |
|     | [Tree Traversals (Postorder)](tree-algorithm/tree-traversals/post-order.md)   | [C++](tree-algorithm/tree-traversals/post-order.cpp)            |        | [1](https://www.techiedelight.com/postorder-tree-traversal-iterative-recursive/) |

---

### [**C++ STL**](cpp-stl/README.md)

---

### [**Data Structure**](data-structure/README.md)

#### [**Linear Data Structure**](data-structure/linear/README.md)

| ☆   | Name (Content)                                                           | C++                                                            | Python                                         | Editorials |
| --- | ------------------------------------------------------------------------ | -------------------------------------------------------------- | ---------------------------------------------- | ---------- |
|     | [Array](data-structure/linear/array/array.md)                            | [C++](data-structure/linear/array/array.cpp)                   |                                                |            |
|     | [Linked List](data-structure/linear/linked-list/linked-list.md)          | [C++](data-structure/linear/linked-list/linked-list.cpp)       |                                                |            |
|     | [Priority Queue](data-structure/linear/priority-queue/priority-queue.md) | [C++](data-structure/linear/priority-queue/priority-queue.cpp) |                                                |            |
|     | [Queue](data-structure/linear/queue/queue.md)                            | [C++](data-structure/linear/queue/queue.cpp)                   | [Python](data-structure/linear/queue/queue.py) |            |
|     | [Stack](data-structure/linear/stack/stack.md)                            | [C++](data-structure/linear/stack/stack.cpp)                   |                                                |            |

#### [**Non-Linear Data Structure**](data-structure/non-linear/README.md)

| ☆   | Name (Content)                                                | C++                                                      | Python | Editorials |
| --- | ------------------------------------------------------------- | -------------------------------------------------------- | ------ | ---------- |
|     | [Hash Map](data-structure/non-linear/hash-map/hash-map.md)    | [C++](data-structure/non-linear/hash-map/hash-map.cpp)   |        |            |
|     | [Heap](data-structure/non-linear/heap/heap.md)                | [C++](data-structure/non-linear/heap/heap.cpp)           |        |            |
|     | [LRU Cache](data-structure/non-linear/lru-cache/lru-cache.md) | [C++](data-structure/non-linear/lru-cache/lru-cache.cpp) |        |            |
|     | [Map](data-structure/non-linear/map/map.md)                   | [C++](data-structure/non-linear/map/map.cpp)             |        |            |
|     | [Set](data-structure/non-linear/set/set.md)                   | [C++](data-structure/non-linear/set/set.cpp)             |        |            |
|     | [Trie](data-structure/non-linear/trie/trie.md)                | [C++](data-structure/non-linear/trie/trie.cpp)           |        |            |
|     | [Tuple](data-structure/non-linear/tuple/tuple.md)             | [C++](data-structure/non-linear/tuple/tuple.cpp)         |        |            |

---

### [**Math**](math/README.md)

| ☆   | Name (Content) | C++     | Python | Editorials |
| --- | -------------- | ------- | ------ | ---------- |
|     |                | [C++]() |        |            |

---

#### [**Geometry**](geometry/README.md)

| ☆   | Name (Content) | C++     | Python | Editorials |
| --- | -------------- | ------- | ------ | ---------- |
|     |                | [C++]() |        |            |

---

### [**Misc**](misc/README.md)

| ☆   | Name (Content)                                              | C++ | Python | Editorials                                                                                                                                                           |
| --- | ----------------------------------------------------------- | --- | ------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [Efficiency](misc/efficiency.md)                            | -   | -      |                                                                                                                                                                      |
|     | [Solving Problems](misc/solving-problems.md)                | -   | -      |                                                                                                                                                                      |
|     | [Union-Find Algorithm (Disjoint-Set Data Structure)]()      |     |        | [1](https://www.techiedelight.com/disjoint-set-data-structure-union-find-algorithm/)                                                                                 |
|     | [Kadane Algorithm (Maximum Sum Subarray Problem)]()         |     |        | [1](https://www.techiedelight.com/maximum-subarray-problem-kadanes-algorithm/)                                                                                       |
|     | [Floyd Cycle Detection Algorithm]()                         |     |        | [1](https://www.techiedelight.com/detect-cycle-linked-list-floyds-cycle-detection-algorithm/)                                                                        |
|     | [Mo Algorithm]()                                            |     |        |                                                                                                                                                                      |
|     | [Approximation Algorithm]()                                 |     |        |                                                                                                                                                                      |
|     | [Euclid's Extended Algorithm]()                             |     |        |                                                                                                                                                                      |
|     | [Matrix multiplication]()                                   |     |        |                                                                                                                                                                      |
|     | [Factorial]()                                               |     |        |                                                                                                                                                                      |
|     | [Statistical Method]()                                      |     |        |                                                                                                                                                                      |
|     | [Probabilistic Methods]()                                   |     |        |                                                                                                                                                                      |
|     | [Max-flow min cut theorem: Ford-fulkerson OR Edmond-Karp]() |     |        |                                                                                                                                                                      |
|     | [Topological Sorting in a DAG]()                            |     |        | [1](https://www.techiedelight.com/topological-sorting-dag/)                                                                                                          |
|     | [Longest Increasing Subsequence]()                          |     |        | [1](https://www.techiedelight.com/longest-increasing-subsequence/)                                                                                                   |
|     | [Number theory algorithms]()                                |     |        | GCD, inverse of the number using extended euler's algorithm, fast power, prime number, Modular Exponentiation, Sieve of Eratosthenes, Fermat’s theorem, Miller Rabin |

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

#### [**Dynamic Proramming**](techniques/dynamic-proramming/README.md)

| ☆   | Name (Content)                                      | C++                                             | Python | Editorials |
| --- | --------------------------------------------------- | ----------------------------------------------- | ------ | ---------- |
|     | [Knapsack](dynamic-proramming/knapsack/knapsack.md) | [C++](dynamic-proramming/knapsack/knapsack.cpp) |        |            |

---

### [**Hashing**](techniques/hashing/README.md)

| ☆   | Name (Content)                                                | C++                                                         | Python | Editorials                                                      |
| --- | ------------------------------------------------------------- | ----------------------------------------------------------- | ------ | --------------------------------------------------------------- |
|     | [String Hashing](techniques/hashing/string-hashing/README.md) | [C++](techniques/hashing/string-hashing/string-hashing.cpp) |        | [cp-algo](https://cp-algorithms.com/string/string-hashing.html) |

---

### [**Greedy Algorithm**](techniques/greedy-algorithm/README.md)

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
|     | [A\* Search](searching/a-star-search/a-star-search.md)    | [C++](searchin/a-star-search/a-star-search.cpp)  |        | [1](https://www.techiedelight.com/Tags/hashing/)  |
|     | [Binary Search](searching/binary-search/binary-search.md) | [C++](searching/binary-search/binary-search.cpp) |        | [1](https://www.techiedelight.com/binary-search/) |
|     | [Hash Search](searching/hash-search/hash-search.md)       | [C++](searching/hash-search/hash-search.cpp)     |        | [1](https://www.techiedelight.com/Tags/hashing/)  |
|     | [Linear Search](searching/linear-search/linear-search.md) | [C++](searchin/linear-search/linear-search.cpp)  |        | [1](https://www.techiedelight.com/Tags/hashing/)  |

---

#### [**Sorting**](techniques/sorting/README.md)

| ☆   | Name (Content)                                                | C++                                                         | Python | Editorials                                                                                                                                     |
| --- | ------------------------------------------------------------- | ----------------------------------------------------------- | ------ | ---------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [Bubble Sort](techniques/sorting/bubble-sort/README.md)       | [C++](techniques/sorting/bubble-sort/bubble-sort.cpp)       |        | [1](https://www.techiedelight.com/bubble-sort-iterative-recursive/)                                                                            |
|     | [Bucket Sort](techniques/sorting/bucket-sort/README.md)       | [C++](techniques/sorting/bucket-sort/bucket-sort.cpp)       |        |                                                                                                                                                |
|     | [Counting Sort](techniques/sorting/counting-sort/README.md)   | [C++](techniques/sorting/counting-sort/counting-sort.cpp)   |        |                                                                                                                                                |
|     | [Heap Sort](techniques/sorting/heap-sort/README.md)           | [C++](techniques/sorting/heap-sort/heap-sort.cpp)           |        | [1](https://www.techiedelight.com/heap-sort-place-place-implementation-c-c/)                                                                   |
|     | [Insertion Sort](techniques/sorting/insertion-sort/README.md) | [C++](techniques/sorting/insertion-sort/insertion-sort.cpp) |        | [1](https://www.techiedelight.com/insertion-sort-iterative-recursive/)                                                                         |
|     | [Merge Sort](techniques/sorting/merge-sort/README.md)         | [C++](techniques/sorting/merge-sort/merge-sort.cpp)         |        | [1](https://www.techiedelight.com/merge-sort/)                                                                                                 |
| ★★★ | [Quick Sort](techniques/sorting/quick-sort/README.md)         | [C++](techniques/sorting/quick-sort/quick-sort.cpp)         |        | [1](//www.techiedelight.com/quicksort/)                                                                                                        |
| ★☆☆ | [Radix Sort](techniques/sorting/radix-sort/README.md)         | [C++](techniques/sorting/radix-sort/radix-sort.cpp)         |        |                                                                                                                                                |
|     | [Selection Sort](techniques/sorting/selection-sort/README.md) | [C++](techniques/sorting/selection-sort/selection-sort.cpp) |        | [1](https://www.techiedelight.com/selection-sort-iterative-recursive/), [2](https://www.techiedelight.com/selection-sort-iterative-recursive/) |
|     | [Shell Sort](techniques/sorting/shell-sort/README.md)         | [C++](techniques/sorting/shell-sort/shell-sort.cpp)         |        |                                                                                                                                                |
|     | [Tree Sort](techniques/sorting/tree-sort/README.md)           | [C++](techniques/sorting/tree-sort/tree-sort.cpp)           |        |                                                                                                                                                |

---

#### Notes

-   Run `prettier --write .` before commit to the repo (Install **prettier** via `brew install prettier`)
-   Some pages requires the [MathJax for GitHub](https://chrome.google.com/webstore/detail/mathjax-plugin-for-github/ioemnmodlmafdkllaclgeombjnmnbima) extension. You can get it [here](https://chrome.google.com/webstore/detail/mathjax-plugin-for-github/ioemnmodlmafdkllaclgeombjnmnbima).
