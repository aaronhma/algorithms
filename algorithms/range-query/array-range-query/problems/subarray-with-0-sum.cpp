#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define FORE(i, a, b) for (int i = a; i < b; i++)

// INPUT
template <class T>
void read(T &x) { cin >> x; }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t, sum = 0;
  read(n);

  bool found = false;

  set<int> st;

  FORE(i, 1, n) {
    read(t);
    sum += t;

    // If the sum is 0 or the sum is already present, then we have a subarray with the sum of 0.
    if (sum == 0 || st.count(sum))
      found = true;

    st.insert(sum);
  }

  cout << boolalpha << found << "\n";

  return 0;
}
