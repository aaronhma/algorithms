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

#include <iostream>
#include <vector>

using namespace std;

#define PB push_back

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
    for (int i = 0; i < this->arr.size(); i++)
    {
      if (i == x)
        return true;
    }

    return false;
  }

private:
  vector<int> arr;
};

int main()
{
  /* Linear search test code */

  return 0;
}
