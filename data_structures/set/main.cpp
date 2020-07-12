/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file data_structures/set/main.cpp
 *  This file implements the Set data structure.
 */
#include "../include/header.h"

#define PB push_back
#include "include/set.h"

class Set : public SetBase
{
public:
  void set_union(Set *set1, Set *set2, Set &back_insertor)
  {
    for (int i = 0; i < set1->size(); i++)
    {
      if (this->isInSet(back_insertor, i))
      {
        back_insertor.insert(i);
      }
    }
  }

  void set_difference(Set set1, Set set2, Set &back_insertor)
  {
    // set_difference = set1 - set2
  }

  void set_intersection(Set set1, Set set2, Set &back_insertor)
  {
    // set_difference = set1 U set2
    for (int i = 0; i < set1.size(); i++)
    {
      for (int j = 0; j < set2.size(); j++)
      {
        if (set1[i] == set2[j])
        {
          back_insertor.insert(set1[i]);
        }
      }
    }
  }

  void printSet(Set *in)
  {
    for (int i = 0; i < in->size(); i++)
    {
      std::cout << (*in)[i] << "\n";
    }
  }

private:
  bool isInSet(SetBase set1, int target)
  {
    for (int i = 0; i < set1.size(); i++)
    {
      if (target == set1[i])
      {
        return true;
      }
    }

    return false;
  }
};

#include "include/disjoint_set.h"

int main()
{
  Set *set_1 = new Set();
  Set *set_2 = new Set();
  Set *back = new Set();
  DisjointSet *disjoint_set = new DisjointSet();

  for (int i = 1; i <= 10; i++)
    set_1->insert(i);

  for (int i = 1; i <= 10; i++)
    set_2->insert(i);

  set_2->insert(11);

  set_1->set_union(set_1, set_2, *back);
  set_1->printSet(set_1);

  // for (int i = 0; i < back->size(); i++)
  // {
  //   std::cout << (int)back[i] << "\n";
  // }

  delete set_1;
  delete set_2;
  delete back;
  delete disjoint_set;
}
