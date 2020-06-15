/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file data_structures/stack/include/stack.h
 *  This implements the Stack data structure.
 */
#pragma once

// TODO: Remove header include guards
#ifndef STACK_H_
#define STACK_H_

#define PB push_back
#define FAIL -1

class Stack
{
public:
  Stack()
  {
    print("Stack initialized and created!");
  }
  ~Stack()
  {
    print("Stack deleted!");
  }

  int size()
  {
    return this->stack.size();
  }

  bool empty()
  {
    return this->size() == 0;
  }

  int top()
  {
    if (this->empty())
    {
      return FAIL;
    }
    else
    {
      int last = this->size() - 1;
      return this->stack[last];
    }
  }

  void push(int x)
  {
    this->stack.PB(x);
  }

  void pop()
  {
    if (!this->empty())
      this->stack.pop_back();
  }

  void ui()
  {
    int input;

    while (input /* check that input is valid */ != 0 /* 0 is either invalid input or user entered */)
    {
      print("Welcome to the Stack implementation!");
      print("");
      print("=== OPTIONS ===");
      print("0. Exit");
      print("1. Push element");
      print("2. Get top element");
      print("3. Sort stack");
      print("4. Print stack");
      print("5. Pop last last element");
      print("6. Clear the stack!");
      std::cout << "\nWhat would you like to do?\n**Please enter an integer!**\n> ";

      std::cin >> input;

      if (input == 0)
      {
        print("Thanks for learning about stacks today!");
      }
      else if (input == 1)
      {
        int element;
        std::cout << "What element should be pushed on to the stack?\n> ";
        std::cin >> element;
        this->push(element);
      }
      else if (input == 2)
      {
        print("Element on top of the stack: " + std::to_string(this->top()));
      }
      else if (input == 3)
      {
        std::sort(stack.begin(), stack.end());
        print("Finished sorting!");
      }
      else if (input == 4)
      {
        this->printStack();
      }
      else if (input == 5)
      {
        this->pop();
      }
      else if (input == 6)
      {
        this->stack.clear();
      }
      else
      {
        print("Because you didn't enter an integer, bye!");
      }
    }
  }

  void printStack()
  {
    print("Contents in stack of " + std::to_string(this->size()) + " elements:");

    for (int i = 0; i < this->size(); i++)
    {
      std::cout << this->stack[i] << " ";
    }

    std::cout << "\n";
  }

private:
  vint stack;
};

#endif // STACK_H_
