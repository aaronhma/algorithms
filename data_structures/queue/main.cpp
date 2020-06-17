/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file data_structures/queue/main.cpp
 *  This file tests the implementation of the Queue data structure.
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

#include "include/queue.h"

int main()
{
  Queue *queue = new Queue();
  queue->ui();

  delete queue;

  return 0;
}
