# Recursion

Anything, and everything related to recursion goes here.

![Image](https://storage.googleapis.com/algodailyrandomassets/curriculum/recursion/cover.jpg)

([Source](https://algodaily.com/categories/recursion))


# Recursion

Recursion is when a function calls itself and every recursive function has two cases: the base case and the recursive case.

A recursive function have to tell it when to stop recursing. Every recursive function has two parts: the base case, and the recursive case. The recursive case is when the function calls itself. The base case is when the function doesn’t call itself again ... so it doesn’t go into an infinite loop.

- Cons

Because a recursive function calls itself, it’s easy to write a function incorrectly that ends up in an infinite loop.

## A stack

A stack has two operations: push and pop.

A stack is a simple data structure. Remember back when we talked about arrays and lists, and you had a todo list? You could add todo items anywhere to the list or delete random items. The stack of sticky notes is much simpler. When you insert an item, it gets added to the top of the list. When you read an item, you only read the topmost item, and it’s taken off the list. So your todo list has only two actions: push (insert) and pop (remove and read).


## Call Stack

All function calls go onto the call stack. The call stack can get very large, which takes up a lot of memory.

Call stack is an important concept in general programming and also important to understand when using recursion.

Your computer uses a stack internally called the call stack.

Using the stack is convenient because you don’t have to keep track of a pile of boxes yourself—the stack does it for you.

Using the stack is convenient, but there’s a cost: saving all that info can take up a lot of memory. Each of those function calls takes up some memory, and when your stack is too tall, that means your computer is saving information for many function calls. At that point, you have two options:

1. You can rewrite your code to use a loop instead.
2. You can use something called tail recursion (an advanced recursion) Only supported by some languages, not all.

- The call stack with recursion

*factorial(5)* is written as *5!*, and it’s defined like this: *5! = 5 * 4 * 3 * 2 * 1*. Similarly, *factorial(3)* is *3 * 2 * 1*. Here’s a recursive function to calculate the factorial of a number:

```python
def fact(x):
  if x == 1:
    return 1
  else:
    return x * fact(x-1)
```
