/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file stl.cpp
 *  This file uses the C++ Standard Library's implementation of a Priority Queue.
 */
#include "../include/header.h"
#include <queue>

int main()
{
  std::priority_queue<int> queue;
  queue.push(25);
  queue.push(100);
  queue.push(75);
  queue.push(125);
  queue.push(50);

  while (!queue.empty())
  {
    print(queue.top());
    queue.pop();
  }

  return 0;
}
