# Stack Analysis

## What is a Stack?

A stack is a LIFO (Last In - First Out) data structure. A stack should be able to support the fundamental stack operations:

- `push(x)` - Push x to the back of the stack
- `pop()` - Delete the last element from the stack if it is not empty

If you want to add more functionality, you should also implement these functions:

- `isEmpty()` - Returns if the stack is empty or not
- `printStack()` - Print elements in stack
- `getSize()` - Returns the number of elements in the stack with the number of bytes in a vector full of integers in the format `{stack_size, bytes}`

## An Example of Stack

An example of stack is dinner plates. You place all the dinner plates in a pile and the last plate that you put in the pile is what you take out (LIFO or Last In - First Out) to wash.

## How I Implemented The Stack

Now that you know the basics of stack, let's check out how I implemented the stack:

```cpp
#include <iostream>
#include <vector>

using namespace std;

#define PB push_back
#define STACK_HEADER "[STACK] "

/* Stack implementation */
class Stack
{
public:
  Stack()
  {
    cout << STACK_HEADER << "Stack created!"
         << "\n";
  }

  ~Stack()
  {
    cout << STACK_HEADER << "Stack deleted!"
         << "\n";
  }

  void push(int x)
  {
    this->stack.PB(x);
    cout << STACK_HEADER << "Successfully pushed " << to_string(x) << " to the stack!"
         << "\n";
    this->size++;
  }

  /* Returns true if pop() was successful */
  bool pop()
  {
    if (this->isEmpty())
    { // Check that stack is not empty
      cout << STACK_HEADER << "The stack is empty, so pop() is not available!"
           << "\n";
      return false;
    }

    this->stack.pop_back();

    this->size--;

    return true;
  }

  vector<int> getSize()
  {
    int bytes = this->getBytes();
    int stack_size = this->size;
    cout << STACK_HEADER << "The number of elements in the stack is: " << to_string(stack_size) << " and " << to_string(bytes) << " bytes!"
         << "\n";
    return vector<int>{stack_size, bytes};
  }

  bool isEmpty()
  {
    bool empty = this->size == 0;

    if (empty)
      cout << STACK_HEADER << "The stack is empty!"
           << "\n";
    else
      cout << STACK_HEADER << "The stack is not empty!"
           << "\n";

    return empty;
  }

  int getBytes()
  {
    // Source: https://stackoverflow.com/questions/17254425/getting-the-size-in-bytes-of-a-vector
    int bytes = sizeof(vector<int>) + (sizeof(int) * this->stack.size());

    cout << STACK_HEADER << "The stack size (in bytes) is " << to_string(bytes) << "!"
         << "\n";

    return bytes;
  }

  void printStack()
  {
    if (this->isEmpty())
      cout << STACK_HEADER << "Stack is empty!"
           << "\n";
    else
    {
      cout << STACK_HEADER;

      for (int i : this->stack)
      {
        cout << i << " ";
      }

      cout << "\n";
    }
  }

private:
  vector<int> stack;
  int size = 0;
};
```

## References

- [0: The Algorithm Design Manual](#)
