#include <bits/stdc++.h>

using namespace std;

bool sqrt(int x) {
  // we only need to check positive values, as (-[number here])^2 will always be positive
  // we only check from 1...x
  int low = 1, high = x;

  // Use standard binary search.
  while (low <= high) {
    // Get the element that might be sqrt(x)
    int mid = low + (high - low) / 2;

    // guess is the result after squaring
    int guess = mid * mid;

    // Yes...it is a perfect square.
    if (guess == x) return true;

    // If the result after squaring is < x, then all elements < low will be < x after squaring, so we'll skip elements to the left of mid.
    else if (guess < x) low = mid + 1;

    // If the result after squaring is > x, then all elements > high will be > x after squaring, so we'll skip elements to the right of mid.
    else high = mid - 1;
  }

  // Nope...it isn't a perfect square.
  return false;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << boolalpha;

  cout << "Is 16 a perfect square? " << sqrt(16) << "\n";
  cout << "Is 20 a perfect square? " << sqrt(20) << "\n";

  return 0;
}
