/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file lru_cache.cpp
 *  This implementations the LRU Cache data structure.
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

#define PB push_back
#define LRU_CACHE_HEADER "[LRU CACHE] "

/* LRU Cache implementation */
class LRUCache
{
public:
  LRUCache(long unsigned int lru_cache_max_size)
  {
    cout << LRU_CACHE_HEADER << "LRU Cache created!"
         << "\n";
    this->max_size = lru_cache_max_size;
  }

  ~LRUCache()
  {
    cout << LRU_CACHE_HEADER << "LRU Cache deleted!"
         << "\n";
  }

  void put(int index, string value)
  {
    if (this->lru_cache.size() == this->max_size)
    {
      cout << LRU_CACHE_HEADER << "LRU Cache has reached capacity of " << to_string(this->max_size) << " elements! Deleting Least Recently Used(LRU) element!"
           << "\n";
      this->lru_cache.erase(this->lru_cache.begin());
    }

    pair<int, string> pair;

    pair.first = index;
    pair.second = value;

    lru_cache.PB(pair);

    cout
        << LRU_CACHE_HEADER << "Successfully put element #" << to_string(index) << " with value: " << value << " to the LRU Cache!"
        << "\n";
  }

  string get(int key)
  {
    for (pair<int, string> i : this->lru_cache)
    {
      if (i.first == key)
      {
        cout << LRU_CACHE_HEADER << to_string(key) << " => " << i.second
             << "\n";
        return i.second;
      }
    }

    int failed = -1;
    cout << LRU_CACHE_HEADER << "Failed to find value with key " << to_string(key) << "!"
         << "\n";
    return to_string(failed);
  }

  int size()
  {
    int size = this->lru_cache.size();
    cout << LRU_CACHE_HEADER << "The LRU Cache has " << to_string(size) << " elements!"
         << "\n";

    return size;
  }

private:
  vector<pair<int, string>> lru_cache;
  long unsigned int max_size;
};

int main()
{
  /* LRU Cache test code */
  LRUCache *lru_cache = new LRUCache(3);

  lru_cache->put(1, "cake");
  lru_cache->put(2, "cookies");
  lru_cache->put(3, "strawberry");
  lru_cache->put(4, "muffins");

  assert(lru_cache->size() == 3);

  for (int i = 1; i <= 5; i++)
  {
    lru_cache->get(i);
  }

  delete lru_cache;

  return 0;
}
