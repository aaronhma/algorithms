#include <bits/stdc++.h>

using namespace std;

bool queens(vector<int> &board, int i) {
  int n = board.size();

  if (i == n) {
    for (int c : board) {
      for (int r = 0; r < n; r++) {
        if (r == c) cout << " Q ";
        else cout << " X ";
      }

      cout << "\n";
    }

    return true;
  }

  for (int c = 0; c < n; c++) {
    bool flag = false;

    for (int rc = 0; rc < i; rc++) {
      if (board[rc] == c || abs(board[rc] - c) == (i - rc)) {
        flag = true;
        break;
      }
    }

    if (flag) continue;

    board[i] = c;

    if (queens(board, i + 1)) return true;

    return false;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 4;

  vector<int> board(n, 0);

  if (!queens(board, 0)) cout << "NO SOLUTION\n";

  return 0;
}
