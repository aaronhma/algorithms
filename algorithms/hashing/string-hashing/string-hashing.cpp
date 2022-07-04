#include <bits/stdc++.h>

using namespace std;

long long compute_hash(string s) {
    long long hash_value = 0, pow = 1, m = 1e9 + 9, p = 31;

    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * pow) % m;
        pow = (pow * p) % m;
    }

    return hash_value;
}

int main()
{
  cout << compute_hash("abc") << "\n"; // 2946

  return 0;
}
