#include <bits/stdc++.h>

using namespace std;

bool create_permutations(vector<int>::iterator begin, vector<int> &permutation, vector<bool> &used, int n) {
  // Base case: If current permutation is valid permutation (contains n elements), print this permutation.
  if ((int)permutation.size() == n) {
    for (int i : permutation) cout << i << " ";
    cout << "\n";
    return true;
  }

  vector<int>::iterator it = begin;

  // Iterate over all the possible choices
  for (int i = 0; i < n; i++) {
    if (i != 0) it++;

    // If we haven't used the element at index i
    if (!used[*it]) {
      // Use this element in the generated permutation
      used[*it] = true; // We use this element.
      permutation.push_back(*it); // Add element

      // Continue exploring permutations with *it included
      create_permutations(begin, permutation, used, n);

      // Undo the previous operation
      used[*it] = false; // We don't use this element anymore.
      permutation.pop_back(); // Remove element
    }
  }

  return false;
}

bool next_permutation(vector<int>::iterator begin, vector<int>::iterator end) {
  vector<int> permutation;

  int n = end - begin;

  vector<bool> used(n);

  return create_permutations(begin, permutation, used, n);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3}, permutation;
  vector<bool> used(3);

  next_permutation(arr.begin(), arr.end());

  return 0;
}
