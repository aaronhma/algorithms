#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  list<int> v;

  for (int i = 1; i <= 5; i++)
    v.push_back(i);

  for (int i : v)
    cout << i << " ";

  cout << "\n";

  for (int i = 6; i <= 10; i++)
    v.push_front(i);

  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

  cout << "\n";

  cout << "Size: " << v.size() << "\n";
  cout << "Front: " << v.front() << "\n";
  cout << "Back: " << v.back() << "\n";

  for (int i = 1; i <= 2; i++)
    v.pop_back();

  for (int i : v)
    cout << i << " ";

  cout << "\n";

  for (int i = 1; i <= 2; i++)
    v.pop_front();

  for (int i : v)
    cout << i << " ";

  cout << "\n";

  if (v.empty()) cout << "Linked list is empty!\n";
  else cout << "Linked list in not empty!\n";

  cout << "Size: " << v.size() << "\n";
  cout << "Front: " << v.front() << "\n";
  cout << "Back: " << v.back() << "\n";

  return 0;
}
