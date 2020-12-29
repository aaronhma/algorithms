/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file binary_search_tree.cpp
 *  This implementations the linear search algorithm.
 */
#include "../../data_structures/include/header.h"

/* Linear search implementation */
class LinearSearch
{
public:
  LinearSearch() {}
  ~LinearSearch() {}
  void push(int x)
  {
    this->arr.PB(x);
  }

  bool search(int x)
  {
    for (long unsigned int i = 0; i < this->arr.size(); i++)
    {
      if (this->arr[i] == x)
        return true;
    }

    return false;
  }

private:
  std::vector<int> arr;
};

int main()
{
  /* Linear search test code */

  return 0;
}
