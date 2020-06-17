/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file hash_table.cpp
 *  This implementations the hash table data structure.
 */

#include "include/header.h"

using namespace std;

#define HASH_TABLE_HEADER "[HASH TABLE] "

/* Implementation of hash table with a vector */
class HashTable
{
public:
  HashTable()
  {
    cout << HASH_TABLE_HEADER << "Hash table created!"
         << "\n";
  }
  ~HashTable()
  {
    cout << HASH_TABLE_HEADER << "Hash table deleted!"
         << "\n";
  }

  void insert(int key, int value)
  {
    pair<int, int> input;
    input.first = key;
    input.second = value;

    this->hash_table.push_back(input);

    cout << HASH_TABLE_HEADER << "Successfully inserted key " << to_string(key) << " with value " << to_string(value) << " into the hash table!"
         << "\n";
  }

  bool delete_by_key(int key)
  {
    for (int i = 0; i < this->hash_table.size(); i++)
    {
      if (this->hash_table[i].first == key)
      {
        cout << HASH_TABLE_HEADER << "Deleted " << key << " with value from the hash table!"
             << "\n";
        this->hash_table.erase(this->hash_table.begin() + i);
        return true;
      }
    }

    return false;
  }

  bool delete_by_value(int value)
  {
    for (int i = 0; i < this->hash_table.size(); i++)
    {
      if (this->hash_table[i].second == value)
      {
        cout << HASH_TABLE_HEADER << "Deleted " << value << " with key from the hash table!"
             << "\n";
        this->hash_table.erase(this->hash_table.begin() + i);
        return true;
      }
    }

    return false;
  }

  int search(int key)
  {
    for (pair<int, int> mapping : this->hash_table)
    {
      if (mapping.first == key)
      {
        cout << HASH_TABLE_HEADER << "Found " << key << " with value" << mapping.second << "in the hash table!"
             << "\n";
        return mapping.second;
      }
    }

    return -1; // not found
  }

  void sort_by_value()
  {
    sort(this->hash_table.begin(), this->hash_table.end(), [](const pair<int, int> &a, const pair<int, int> &b) -> bool {
      return a.second < b.second;
    });

    cout << HASH_TABLE_HEADER << "Successfully sorted the hash table!"
         << "\n";
  }

  void sort_by_key()
  {
    sort(this->hash_table.begin(), this->hash_table.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
      return a.first < b.first;
    });

    cout << HASH_TABLE_HEADER << "Successfully sorted the hash table!"
         << "\n";
  }

  void printHashTable()
  {
    cout << HASH_TABLE_HEADER << "Printing hash table..."
         << "\n";

    for (pair<int, int> mapping : this->hash_table)
    {
      cout << HASH_TABLE_HEADER << mapping.first << " => " << mapping.second << "\n";
    }
  }

private:
  vector<pair<int, int>> hash_table; // key -> value in each pair
};

int main()
{
  HashTable *dictionary = new HashTable();

  for (int i = 1; i <= 10; i++)
  {
    for (int j = 0; j <= 2; j++)
      dictionary->insert(i, j);
  }

  dictionary->printHashTable();
  dictionary->sort_by_value();
  dictionary->printHashTable();

  delete dictionary;

  return 0;
}
