#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FORI(i, a, b) for (int i = a; i <= b; i++)

// INPUT
template <class T>
void read(T &x) { cin >> x; }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, prev = 0, curr = 1;
  read(n);

  FORI(i, 2, n) {
    swap(prev, curr);
    curr += prev;
  }

  cout << curr << "\n";

  return 0;
}
