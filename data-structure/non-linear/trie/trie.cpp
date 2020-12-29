#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

// insert
// search

class Trie
{
public:
  Trie() {}
  ~Trie() {}

  bool insert(string x)
  {
    trie.push_back(this->hasher(x));

    return true;
  }

  bool search(string x)
  {
    vector<char> hashed = hasher(x);

    for (vector<char> mapper : trie)
    {
      if (mapper.size() != hashed.size())
        continue;

      int correct = 0;

      for (int i = 0; i < mapper.size(); i++)
      {
        if (hashed[i] != mapper[i])
        {
          i++;
        }
        else
        {
          correct += 1;
        }
      }

      if (correct == hashed.size())
      {
        return true;
      }
    }

    return false;
  }

private:
  vector<vector<char>> trie;

  vector<char> hasher(string x)
  {
    vector<char> to_be_inserted;

    for (char i : x)
    {
      to_be_inserted.push_back(i);
    }

    to_be_inserted.push_back('.');

    return to_be_inserted;
  }
};

int main()
{
  Trie *trie = new Trie();
  trie->insert("app");
  trie->insert("apple");
  trie->insert("orange");

  cout << trie->search("apple") << "\n";
  cout << trie->search("orange") << "\n";
  cout << trie->search("apps") << "\n";

  return 0;
}
