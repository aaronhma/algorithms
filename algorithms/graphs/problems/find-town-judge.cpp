// Find The Town Judge
// https://leetcode.com/problems/find-the-town-judge/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int findJudge(int N, vector<vector<int>> &trust)
  {
    // check the out and indegee of a graph
    vector<int> indegree(N + 1, 0), outdegree(N + 1, 0);

    for (auto i : trust)
    {
      outdegree[i[0]]++;
      indegree[i[1]]++;
    }

    for (int i = 1; i <= N; i++)
    {
      // if everyone (except the town judge) is connected to this node and no edges leave this node, this node is the town judge
      if (indegree[i] == N - 1 && outdegree[i] == 0)
        return i;
    }

    return -1;
  }
};
