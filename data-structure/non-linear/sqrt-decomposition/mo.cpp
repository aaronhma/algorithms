// https://github.com/Ashishgup1/Competitive-Coding/blob/master/Z%20Algorithm.cpp
// Sample Problem 1: http://codeforces.com/problemset/problem/127/D
// Sample Solution 1: http://codeforces.com/contest/127/submission/39791421
#include <bits/stdc++.h>

using namespace std;

const int N = 10;
const int M = 10;
const int blockSize = (int)sqrt(N + .0) + 1;
int freq[M];
long long sum = 0;

struct Query {
  int l, r, idx;

  Query() {}
  Query(int L, int R, int I) : l(L), r(R), idx(I) {}

  // sorting comparator
  bool operator<(Query other) const {
    return make_pair(l / blockSize, r) < make_pair(other.l / blockSize, other.r);
  }
};

// sorting comparator
bool comp(struct Query &d1, struct Query &d2) {
  // query 1 or 2 starting block index
  int b1 = d1.l / blockSize;
  int b2 = d2.l / blockSize;

  // query 1 and query 2 are not in the same block
  if (b1 != b2)
    return b1 < b2; // sort them by block number
  else
    return (b1 & 1) ? d1.r < d2.r : d1.r > d2.r; // sort desending order of r index
}

inline void add(int x) {
  sum -= 1LL * freq[x] * x;
  freq[x]++;
  sum += 1LL * freq[x] * x;
}

inline void remove(int x) {
  sum -= 1LL * freq[x] * x;
  freq[x]--;
  sum += 1LL * freq[x] * x;
}

vector<int> mo(vector<int> &arr, vector<Query> queries) {
  vector<int> ans(queries.size());
  sort(queries.begin(), queries.end());

  int l = 1, r = 0;
  // int l = 0, r = -1;  // work the same above
  sum = 0;

  // invariant: data structure will always reflect the range [cur_l, cur_r]
  for (Query query : queries) {
    while (l > query.l) {
      l--;
      add(arr[l]);
    }

    while (r < query.r) {
      r++;
      add(arr[r]);
    }

    while (l < query.l) {
      remove(arr[l]);
      l++;
    }

    while (r > query.r) {
      remove(arr[r]);
      r--;
    }

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
  vector<Query> queries {Query(3, 7, 0), Query(0, 1, 1), Query(6, 9, 2)};
  // vector<Query> queries {Query(1, 2, 0), Query(0, 1, 1)};  // much simpler example

  vector<int> ans = mo(arr, queries); // 14 5 9

  for (int i : ans)
    cout << i << " ";
  cout << "\n";

  return 0;
}

//Problem 1: https://codeforces.com/contest/86/problem/D
//Solution 1: https://codeforces.com/contest/86/submission/50507192

//Problem 2 (Prefix Xor): https://codeforces.com/contest/617/problem/E
//Solution 2: https://codeforces.com/contest/617/submission/45491963

//Problem 3 (Inversions in a Range): https://www.codechef.com/CCOQ2019/problems/DRAGONS/
//Solution 3: https://www.codechef.com/viewsolution/23234139
