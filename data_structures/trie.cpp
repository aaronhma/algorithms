/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file trie.cpp
 *  This implementations the trie data structure.
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

#define TRIE_HEADER "[TRIE] "
#define PB push_back

/* Implementation of a trie */
class Trie
{
public:
  Trie()
  {
    cout << TRIE_HEADER << "Trie created!"
         << "\n";
  }

  ~Trie()
  {
    cout << TRIE_HEADER << "Trie deleted!"
         << "\n";
  }

  void insert(string prefix)
  {
    this->trie.PB(prefix);
    cout << TRIE_HEADER << "Successfully inserted " << prefix << " to the trie!"
         << "\n";
  }

  bool findPrefix(string prefix)
  {
    for (string i : this->trie)
    {
      if (i == prefix)
      {
        cout << TRIE_HEADER << "Found " << prefix << " in trie!"
             << "\n";
        return true;
      }
    }

    cout << TRIE_HEADER << "Didn't find " << prefix << " in trie!";
    return false;
  }

  bool startsWith(string prefix)
  {
    for (string i : this->trie)
    {
      if (i.substr(0, prefix.size()) == prefix)
      {
        cout << TRIE_HEADER << "startsWith(\"" << prefix << "\") \t\t= True"
             << "\n";
        return true;
      }
    }

    cout << TRIE_HEADER << "startsWith(\"" << prefix << "\") \t\t= NOTHING?!"
         << "\n";
    return false;
  }

private:
  vector<string> trie;
};

int main()
{
  /* Trie implementation test code */
  Trie *trie = new Trie();
  vector<string> input = {"apple", "phone", "application", "app", "verify", "verification", "alarm", "snooze", "angle", "angel", "invest", "investor", "name", "test", "testcase", "programming", "program", "ad", "advertisement", "advertising", "vector", "trie", "prefix", "preference"};

  for (string i : input)
  {
    trie->insert(i);
  }

  assert(trie->startsWith("app") == true);
  assert(trie->startsWith("ang") == true);
  assert(trie->startsWith("pref") == true);
  assert(trie->startsWith("snake") == false);
  assert(trie->startsWith("inv") == true);
  assert(trie->startsWith("adv") == true);
  assert(trie->startsWith("noun") == false);
  assert(trie->startsWith("verify") == true);
  assert(trie->startsWith("age") == false);
  assert(trie->startsWith("prog") == true);
  assert(trie->findPrefix("angle") == true);

  cout << "All tests passed!"
       << "\n";

  delete trie;

  return 0;
}
