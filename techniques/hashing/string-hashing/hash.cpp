#include <bits/stdc++.h>

using namespace std;

long long compute_hash(string s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;

    // compute hash
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }

    return hash_value;
}

int main()
{
  cout << compute_hash("abc") << "\n"; // 2946

  return 0;
}
