// TODO: Need to backtrack on path https://cses.fi/problemset/task/1193
#include <bits/stdc++.h>

using namespace std;

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int lee(vector<string> &arr, int n, int m, int start_x, int start_y, int end_x, int end_y) {
  vector<vector<bool>> visited(n, vector<bool>(m)); // Visited boolean array
  // {minimum distance, {x-coordinate, y-coordinate}}
  queue<pair<int, pair<int, int>>> Q;
  Q.push({0, {start_x, start_y}});
  visited[start_x][start_y] = 1; // Mark starting cell as visited

  // BFS from source cell
  while (!Q.empty()) {
    pair<int, pair<int, int>> node = Q.front();
    Q.pop();

    // If we're reached the final cell, update the answer and stop searching.
    if (node.second.first == end_x && node.second.second == end_y) {
      return node.first;
    }

    // Iterate through this node's possible neighbors
    for (int i = 0; i < 4; i++) {
      // Possible neighbor cell coordinates
      int x = node.second.first + dx[i], y = node.second.second + dy[i];

      // Make sure this cell is valid
      if (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && arr[x][y] != '#') {
        visited[x][y] = 1; // Mark cell as visited
        Q.push({node.first  + 1, {x, y}}); // Add to queue for exploration
      }
    }
  }

  return -1;
}

int main()
{
  /**
   * Data:
    5 8
    ########
    #.A#...#
    #.##.#B#
    #......#
    ########
  */
  int n, m, start_x = -1, start_y = -1, end_x = -1, end_y = -1;
  cin >> n >> m;
  string S;
  vector<string> arr(n);

  // Read data row-by-row and find starting and ending coordinates
  for (int i = 0; i < n; i++) {
    cin >> S;

    for (int j = 0; j < m; j++) {
      if (S[j] == 'A') {
        start_x = i;
        start_y = j;
      }

      if (S[j] == 'B') {
        end_x = i;
        end_y = j;
      }
    }

    arr[i] = S;
  }

  int ans = lee(arr, n, m, start_x, start_y, end_x, end_y);

  // Print answer
  if (ans == -1) {
    cout << "NO\n";
  } else {
    cout << "YES\n" << ans << "\n";
  }

  return 0;
}
