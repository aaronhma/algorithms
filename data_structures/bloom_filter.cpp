/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file bloom_filter.cpp
 *  This implementations the Bloom Filter data structure.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define PB push_back
#define BLOOM_FILTER_HEADER "[BLOOM FILTER] "

/* Hash function */
hash<string> hasher;

/* Bloom Filter implementation */
class BloomFilter
{
public:
  BloomFilter(int max_size)
  {
    cout << BLOOM_FILTER_HEADER << "Bloom Filter created!"
         << "\n";
    this->size = max_size;

    for (int i = -1; i <= max_size + 1; i++)
    {
      this->bitmap.PB(0);
    }
  }

  ~BloomFilter()
  {
    cout << BLOOM_FILTER_HEADER << "Bloom Filter deleted!"
         << "\n";
  }

  void insert(string value)
  {
    int hashed = hasher(value);
    size_t hash_mod = hashed % this->size;
    // cout << hash_mod << "\n";
    if (hash_mod > this->size)
    {
      cout << hash_mod << " " << value << "\n";
      // throw "ERROR!";
    }
    else
    {
      this->bitmap[hash_mod] = 1;

      cout
          << BLOOM_FILTER_HEADER << "Successfully put " << value << " to the Bloom Filter!"
          << "\n";
    }
  }

  bool lookup(string value)
  {
    int hashed = hasher(value);
    int hash_mod = hashed % this->size;

    if (hash_mod > this->size)
    {
      return false;
    }
    else
    {
      if (this->bitmap[hash_mod] == 0)
      {
        cout << "true\n";
        return false;
      }
      else
      {
        cout << "true\n";
        return true;
      }
    }
  }

private:
  int size;
  vector<int> bitmap;
};

int main()
{
  /* Bloom Filter test code */
  BloomFilter *bloom_filter = new BloomFilter(3);
  vector<string> input = {"cake", "cookies", "muffin", "bananas", "t"};

  for (string i : input)
  {
    bloom_filter->insert(i);
  }

  delete bloom_filter;

  return 0;
}
