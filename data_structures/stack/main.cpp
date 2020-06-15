/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file data_structures/stack/main.cpp
 *  This tests the implementation of the Stack data structure.
 */
#include "../include/header.h"

/* Declarations */
#define print(message) std::cout << message << std::endl
typedef std::vector<int> vint;

#include "include/stack.h"

int main()
{
  Stack *stack = new Stack();
  stack->ui();

  delete stack;

  return 0;
}
