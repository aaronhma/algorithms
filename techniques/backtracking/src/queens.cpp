#include <bits/stdc++.h>

using namespace std;

bool queens(vector<int> &board, int i) {
  int n = board.size();

  // Base case: all queens have been placed on the n*n chess board
  if (i == n) {
    for (int c : board) {
      for (int r = 0; r < n; r++) {
        if (r == c) cout << "| Q ";
        else cout << "| X ";
      }

      cout << "|\n";
    }

    return true;
  }

  for (int c = 0; c < n; c++) {
    // Validate that the queen placement at cell i won't
    // attack any other queens.
    bool attack = false;

    for (int rc = 0; rc < i; rc++) {
      if (board[rc] == c || abs(board[rc] - c) == (i - rc)) {
        attack = true;
        break;
      }
    }

    // Placing a queen on this row would lead to an attack, exit.
    if (attack) continue;

    // Place queen at position i
    board[i] = c;

    // If we could place n queens for the rest of chessboard, we found a solution.
    if (queens(board, i + 1)) return true;
  }

  // We couldn't solve this problem - NO SOLUTION
  return false;
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
