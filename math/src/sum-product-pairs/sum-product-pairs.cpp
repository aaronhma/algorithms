#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // input array
  vector<ll> arr = {1, 3, 4};

  // long long to prevent overflow
  // E: sum of all the element in the array
  // (arr_1 + arr_2 + ... + arr_n)^2
  // element_sq: arr_1^2 + arr_2^2 + ... + arr_n^2
  ll E = 0, element_sq = 0;

  for (ll i : arr) {
    E += i;
    element_sq += i * i;
  }

  // square E
  E = E * E;

  // P = (E - (arr_1^2 + arr_2^2 + ... + arr_n^2)) / 2
  cout << (E - element_sq) / 2 << "\n";

  return 0;
}
