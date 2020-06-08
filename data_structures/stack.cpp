/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file stack.cpp
 *  This implementations the stack data structure.
 */

#include <bits/stdc++.h>

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

int main()
{
  /* Stack test code */
  Stack *stack = new Stack();

  // cout << "Running stack implementation tests!"
  //  << "\n";
  for (int i = 1; i <= 10; i++)
  {
    stack->push(i);
  }

  stack->printStack();
  delete stack;

  return 0;
}
