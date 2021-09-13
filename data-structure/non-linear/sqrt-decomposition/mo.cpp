#include <bits/stdc++.h>

using namespace std;

struct Query {
  int l, r, idx;

  Query() {}
  Query(int L, int R, int I) : l(L), r(R), idx(I) {}
};

void add(vector<int> &freq, long long &sum, int &x) {
  sum -= 1LL * freq[x] * x;
  freq[x]++;
  sum += 1LL * freq[x] * x;
}

void remove(vector<int> &freq, long long &sum, int &x) {
  sum -= 1LL * freq[x] * x;
  freq[x]--;
  sum += 1LL * freq[x] * x;
}

vector<int> mo(vector<int> &arr, vector<Query> queries) {
  int n = (int)queries.size();
  int blockSize = (int)sqrt(n + .0) + 1, m = 0;
  long long sum = 0;

  for (int i : arr) m = max(m, i + 1);

  vector<int> ans(n), freq(m);

  sort(queries.begin(), queries.end(), [blockSize](const Query &a, const Query &b) {
    return make_pair(a.l / blockSize, a.r) < make_pair(b.l / blockSize, b.r);
  });

  int l = 1, r = 0;
  // int l = 0, r = -1;  // work the same above

  // invariant: data structure will always reflect the range [cur_l, cur_r]
  for (Query query : queries) {
    while (l > query.l) add(freq, sum, arr[--l]);

    while (r < query.r) add(freq, sum, arr[++r]);

    while (l < query.l) remove(freq, sum, arr[l++]);

    while (r > query.r) remove(freq, sum, arr[r--]);

    ans[query.idx] = sum;
  }

  return ans;
}

int main()
{
  vector<int> arr{2, 3, 4, 1, 5, 1, 4, 3, 1, 1}; // length of 10
  // vector<Query> queries {
  //   l=3, r=7, idx=0,   // {1, 5, 1, 4, 3}  14
  //   l=0, r=1, idx=1,   // {2, 3}  5
  //   l=6, r=9, idx=2,   // {4, 3, 1, 1}  9
  // }
  vector<Query> queries {Query(3, 7, 0), Query(0, 1, 1), Query(6, 9, 2)}; // 14 5 9

  vector<int> ans = mo(arr, queries); // 14 5 9

  for (int i : ans)
    cout << i << " ";
  cout << "\n";

  return 0;
}
