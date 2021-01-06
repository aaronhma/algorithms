# Tree

A tree is a frequently-used data structure to simulate a hierarchical tree structure.

Each node of the tree will have a root value and a list of references to other nodes which are called child nodes. From graph view, a tree can also be defined as a directed acyclic graph which has _N_ nodes and _N-1 edges_.

A _Binary Tree_ is a tree data structure in which each node has _at most two children_, which are referred to as the _left child_ and the _right child_.

## Complexity analysis

Traverse a tree recursively to retrieve all the data in _pre-order_, _in-order_ or _post-order_. The time complexity is _O(N)_ because we visit each node exactly once. And the depth of the tree might be _N_ in the worst case.

The level of recursion might be at most _N_ in the worst case. Therefore, taking system stack into consideration, the space complexity is _O(N)_ as well.

For the iterative solution, the time complexity is apparently the same with recursion solution which is _O(N)_. The space complexity is also _O(N)_ since in the worst case, we will have all the nodes in the stack. There are some other solutions for iterative traversal which can reduce the space complexity to _O(1)_.

## Traverse a Tree

               F
      B                 G

A D I
C E H

### Pre-order traversal: F->B->A->D->C->E->G->I->H

1. visit the root first
2. traverse the left subtree
3. traverse the right subtree.

```python
def traversal(root, answer):
  if root == None:
    return

  answer.add(root.val)           # visit the root
  traversal(root.left, answer)   # traverse left subtree
  traversal(root.right, answer)  # traverse right subtree

def preorderTraversal(root):
  answer = list()
  traversal(root, answer)

  return answer
```

## In-order Traversal: A->B->C->D->E->F->G->H->I

Typically, for _binary search tree_, we can retrieve all the data in sorted order using in-order traversal.

1. Traverse the left subtree
2. visit the root
3. Traverse the right subtree

```python
def traversal(root, answer):
  if root == None:
    return

  traversal(root.left, answer)   # traverse left subtree
  answer.add(root.val)           # visit the root
  traversal(root.right, answer)  # traverse right subtree

def inorderTraversal(root):
  answer = list()
  traversal(root, answer)

  return answer
```

## Post-order traversal: A->C->E->D->B->H->I->G->F

1. traverse the left subtree
2. traverse the right subtree
3. visit the root

**Note:** When you delete nodes in a tree, deletion process will be in _post-order_. It will delete its left child and its right child before you delete the node itself. _Post-order_ is widely use in mathematical expression. It is easier to write a program to parse a post-order expression.

```python
def traversal(root, answer):
  if root == None:
    return

  traversal(root.left, answer)   # traverse left subtree
  traversal(root.right, answer)  # traverse right subtree
  answer.add(root.val)           # visit the root

def inorderTraversal(root):
  answer = list()
  traversal(root, answer)

  return answer
```

## Iterative Solution for tree traversal

It is comparatively easy to do traversal recursively but when the depth of the tree is too large, we might suffer from _stack overflow_ problem. That's one of the main reasons why we want to solve this problem iteratively sometimes.

One solution: use a stack to simulate the recursion process.
Taking pre-order traversal as an example, in each iteration, we pop one node from the stack and visit this node. Then if this node has a right child, push its right child into the stack. If this node has a left child, push its left child into the stack. It is noteworthy that we push the right child first so that we can visit the left child first since the nature of the stack is LIFO(last in first out). After that, we can continue to the next iteration until the stack is empty.

```python
def preorderTraversal(root):
  answer = list()
  stack = list()

  if root != None:
    stack.append(root)

  while len(stack) > 0:
    cur = stack.pop()
    answer.add(cur.val)         # visit the root
    if cur.right != None:
      stack.append(cur.right)   # push right child to stack if it is not null
    if cur.left != None:
      stack.append(cur.left)    # push left child to stack if it is not null
  return answer

  return answer
```

## Level-order Traversal

Level-order traversal is to traverse the tree level by level.

Since each node in the tree will be pushed into the queue exactly once, the time complexity for level-order traversal is _O(N)_, where _N_ is the total number of nodes in the tree. Space complexity of level-order traversal is also _O(N)_ because the size of the queue will be at most _N_ because each node will be pushed into the queue exactly once.

_Breadth-First Search_ is an algorithm to traverse or search in data structures like a tree or a graph. Typically, we use a queue to help us to do BFS.

1. the algorithm starts with a root node
2. visit the node itself
3. traverse its neighbors
4. traverse its second level neighbors
5. traverse its third level neighbors
6. so on and so forth.

Queue:

1. Push root into queue (F) Answer: [[F]]
2. Level Traversal - Level 0 (B) & (G) Answer: [[F]]
3. Level Traversal - Level 1 (B) Answer: [[F], [B]]
4. Level Traversal - Level 1 (A) & (D) Answer: [[F], [B, G]]
5. Level Traversal - Level 1 (I) Answer: [[F], [B, G]]
6. Level Traversal - Level 2 (C) & (E) Answer: [[F], [B, G], [A, D, I]]
7. Level Traversal - Level 3 (H) Answer: [[F], [B, G], [A, D, I], [C, E, H]]
8. End of Level Traversal

```Java
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        if (root != null) {
            q.offer(root);
        }
        TreeNode cur;
        while (!q.isEmpty()) {
            int size = q.size();
            List<Integer> subAns = new LinkedList<Integer>();
            for (int i = 0; i < size; ++i) {        // traverse nodes in the same level
                cur = q.poll();
                subAns.add(cur.val);                // visit the root
                if (cur.left != null) {
                    q.offer(cur.left);              // push left child to queue if it is not null
                }
                if (cur.right != null) {
                    q.offer(cur.right);             // push right child to queue if it is not null
                }
            }
            ans.add(subAns);
        }
        return ans;
    }
}
```

## Solve Tree Problems Recursively

Recursion is one of the most powerful and frequently used techniques for solving tree problems.

A tree can be defined recursively as a node(the root node) that includes a value and a list of references to children nodes. Recursion is one of the natural features of a tree. Therefore, many tree problems can be solved recursively. For each recursive function call, we only focus on the problem for the current node and call the function recursively to solve its children.

When you meet a tree problem, ask yourself two questions:

1. Can you determine some parameters to help the node know its answer?
2. Can you use these parameters and the value of the node itself to determine what should be the parameters passed to its children?

If the answers are both yes, try to solve this problem using a "top-down" recursive solution.

Or, you can think of the problem in this way:

1. for a node in a tree, if you know the answer of its children, can you calculate the answer of that node?

If the answer is yes, solving the problem recursively using a bottom up approach might be a good idea.

### "Top-down" Solution

"Top-down" means that in each recursive call, we will visit the node first to come up with some values, and pass these values to its children when calling the function recursively. So the "top-down" solution can be considered as a kind of preorder traversal. To be specific, the recursive function top_down(root, params) works like this:

1. return specific value for null node
2. update the answer if needed // answer <-- params
3. left_ans = top_down(root.left, left_params) // left_params <-- root.val, params
4. right_ans = top_down(root.right, right_params) // right_params <-- root.val, params
5. return the answer if needed // answer <-- left_ans, right_ans

For instance, consider this problem: given a binary tree, find its maximum depth.

We know that the depth of the root node is _1_. For each node, if we know its depth, we will know the depth of its children. Therefore, if we pass the depth of the node as a parameter when calling the function recursively, all the nodes will know their depth. And for leaf nodes, we can use the depth to update the final answer. Here is the pseudocode for the recursive function _maximum_depth(root, depth)_:

1.  return if root is null
2.  if root is a leaf node:
3.       answer = max(answer, depth)         // update the answer if needed
4.  maximum_depth(root.left, depth + 1) // call the function recursively for left child
5.  maximum_depth(root.right, depth + 1) // call the function recursively for right child

```python
private int answer;		// don't forget to initialize answer before call maximum_depth
private void maximum_depth(TreeNode root, int depth) {
  if (root == null) {
    return;
  }
  if (root.left == null && root.right == null) {
    answer = Math.max(answer, depth);
  }
  maximum_depth(root.left, depth + 1);
  maximum_depth(root.right, depth + 1);
}
```

### "Bottom-up" Solution

"Bottom-up" is another recursive solution. In each recursive call, we will firstly call the function recursively for all the children nodes and then come up with the answer according to the returned values and the value of the current node itself. This process can be regarded as a kind of postorder traversal. Typically, a "bottom-up" recursive function bottom_up(root) will be something like this:

1. return specific value for null node
2. left_ans = bottom_up(root.left) // call function recursively for left child
3. right_ans = bottom_up(root.right) // call function recursively for right child
4. return answers // answer <-- left_ans, right_ans, root.val

Let's go on discussing the question about maximum depth but using a different way of thinking: for a single node of the tree, what will be the maximum depth x of the subtree rooted at itself?

If we know the maximum depth _l_ of the subtree rooted at its **left** child and the maximum depth _r_ of the subtree rooted at its **right** child, can we answer the previous question? Of course yes, we can choose the maximum between them and add 1 to get the maximum depth of the subtree rooted at the current node. That is _x = max(l, r) + 1_.

## Background

A tree is a non-linear data structure that organizes values hierarchically through linking together nodes (each entry in a tree). Each linkage has 0 or more child nodes.

![Image](https://www.interviewcake.com/images/svgs/trees__animal_classes.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/tree?))

## Traversing a Tree

### Breadth-First Search (BFS)

In Breadth-First Search (BFS), we explore all the nodes level by level. Here's a tree with nodes labeled in the order they'd be visited with BFS:

![Image](https://www.interviewcake.com/images/svgs/trees__bfs.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/tree?))

level 1: root: 1
level 2: 2, 3
level 3: 4, 5, 6, 7
level 4: 8, 9

### Depth-First Search (DFS)

On the other hand, in Depth-First Search (DFS), we go as deep as possible, prefering the left elements first over the right elements, then moving back up again and moving to explore the right elements.

![Image](https://www.interviewcake.com/images/svgs/trees__dfs.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/tree?))

## Real-World Applications

- Operating system filesystems - showing all your folders with files

- Comments - Comments, replies, etc.

- Family tree - grandparents, parents, children

## References

- [Interview Cake: Tree](https://www.interviewcake.com/concept/cpp/tree?)
