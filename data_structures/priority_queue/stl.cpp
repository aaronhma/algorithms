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
#include <sstream>

template <typename T>
std::string to_string(const T &n)
{
  std::ostringstream ss;
  ss << n;
  return ss.str();
}

int main()
{
  std::priority_queue<int> queue;
  queue.push(25);
  queue.push(100);
  queue.push(75);
  queue.push(125);
  queue.push(50);

  while (!queue.empty()) // as long as we still have data in the priority queue...
  {
    print("The size of the priority queue is: " + to_string(queue.size()) + " elements!");
    print("Top element: " + to_string(queue.top())); // 125 100 75 50 25
    queue.pop();                                     // pops the max element
  }

  return 0;
}
