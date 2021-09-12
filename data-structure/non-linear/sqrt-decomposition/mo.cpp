#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
const int Q = 2e5 + 5;
const int M = 1e6 + 5;
const int SZ = sqrt(N) + 1;

struct Query {
  int l, r, idx;
} query[Q];

int n, q, a[N];
int freq[M];
long long ans[Q];
long long cur = 0;

// sorting comparator
bool comp(struct Query &d1, struct Query &d2) {
  // query 1 or 2 starting block index
  int b1 = d1.l / SZ;
  int b2 = d2.l / SZ;

  // query 1 and query 2 are not in the same block
  if (b1 != b2)
    return b1 < b2; // sort them by block number
  else
    return (b1 & 1) ? d1.r < d2.r : d1.r > d2.r; // sort desending order of r index
}

inline void add(int x) {
  cur -= 1LL * freq[x] * freq[x] * x;
  freq[x]++;
  cur += 1LL * freq[x] * freq[x] * x;
}

inline void remove(int x) {
  cur -= 1LL * freq[x] * freq[x] * x;
  freq[x]--;
  cur += 1LL * freq[x] * freq[x] * x;
}

void mo() {
  sort(query + 1, query + q + 1, comp);
  int l = 1, r = 0;
  cur = 0;

  for (int i = 1; i <= q; i++) {
    while (l < query[i].l)
      remove(a[l++]);
    while (l > query[i].l)
      add(a[--l]);
    while (r < query[i].r)
      add(a[++r]);
    while (r > query[i].r)
      remove(a[r--]);

    ans[query[i].idx] = cur;
  }

  // return ans;
}

int main()
{
  vector<int> arr{2, 3, 4, 1, 5, 1, 4, 3, 1, 1}; // length of 10
  // vector<Query> queries {
  //   l=3, r=7, idx=0,   // {1, 5, 1, 4, 3} 4
  //   l=0, r=1, idx=1,   // {2, 3} 3
  //   l=6, r=9, idx=2,   // {4, 3, 1, 1} 3
  // }

  // int ans = mo();

  return 0;
}

//Problem 1: https://codeforces.com/contest/86/problem/D
//Solution 1: https://codeforces.com/contest/86/submission/50507192

//Problem 2 (Prefix Xor): https://codeforces.com/contest/617/problem/E
//Solution 2: https://codeforces.com/contest/617/submission/45491963

//Problem 3 (Inversions in a Range): https://www.codechef.com/CCOQ2019/problems/DRAGONS/
//Solution 3: https://www.codechef.com/viewsolution/23234139
