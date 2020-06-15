/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file data_structures/map/include/map.h
 *  This file implements the Map data structure.
 */
#pragma once

// TODO: Remove include header guards

#ifndef MAP_H_
#define MAP_H_

class Map
{
public:
  Map() {}
  ~Map() {}

  bool empty()
  {
    return this->size() == 0;
  }

  int size()
  {
    return this->map.size();
  }

  int operator[](int key)
  {
    for (int i = 0; i < this->size(); i++)
    {
      if (map[i].first == key)
      {
        return map[i].second;
      }
    }

    return -1;
  }

  void insert(int key, int value)
  {
    std::pair<int, int> new_pair;
    new_pair.first = key;
    new_pair.second = value;

    map.PB(new_pair);
  }

  int count(int target)
  {
    for (int i = 0; i < this->size(); i++)
    {
      if (this->map[i].first == target)
      {
        return 1;
      }
    }

    return -1;
  }

  void sort(bool sort_value)
  {
    // sort by value
    if (sort_value)
    {
      std::sort(map.begin(), map.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return a.second < b.second;
      });
    }
    else
    {
      this->sort();
    }
  }

  void sort()
  {
    // sort by key
    std::sort(this->map.begin(), this->map.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
      return a.first < b.first;
    });
  }

  int hasher();

private:
  std::vector<std::pair<int, int>> map;
};

#endif // MAP_H_
