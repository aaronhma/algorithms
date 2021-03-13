#include <bits/stdc++.h>

using namespace std;

// If we can arrange $c$ cows spaced $dist$ distance apart, return true.
bool valid(vector<int> arr, int dist, int c) {
  // n: Number of cows
  // prev: Previous cow placed stall #
  // placed: # of cows placed
  // NOTE: We start by placing the first cow at stall arr[0] (initialize prev = arr[0]), and placed = 1 (we placed one cow already).
  int n = arr.size(), prev = arr[0], placed = 1;

  // Go through all the remaining stalls
  for (int i = 1; i < n; i++) {
    // if the distance from current stall - previous stall is >= the distance we want, we place the cow at stall arr[i].
    if (arr[i] - prev >= dist) {
      // We placed a new cow in a stall.
      placed++;

      // Update previous cow to make it arr[i].
      prev = arr[i];

      // If the # of cows placed is the same as the # of cows we have, return true (all cows are spaced $dist$).
      if (placed == c) return true;
    }
  }

  // We couldn't place $c$ cows spaced $dist$ distance.
  return false;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n, c;
  cin >> t;

  while (t--) {
    // Read in input
    cin >> n >> c;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    // Sort the array for binary search to work
    sort(arr.begin(), arr.end());

    // ans: If we couldn't find anything, we print 0.
    int low = arr[0], high = arr[n - 1], ans = 0;

    // Binary search the maximum possible distance
    while (low <= high) {
      // Calculate the middle # (the distance we want)
      int mid = low + (high - low) / 2;

      // If we could place all cows at least $mid$ distance apart, move $low$ to $mid + 1$ (try next possible).
      if (valid(arr, mid, c)) {
        low = mid + 1;

        // Update answer
        // We don't need to take the max distance, as at each step, if valid(arr, mid, c) is true, we have a higher $mid$.
        ans = mid;
      }
      // Since we couldn't place all cows at least $mid$ distance apart, any distance > $mid$ will not work. Move $high$ to $mid - 1$ (try next possible as all distances > mid will also result in "we couldn't place all cows at least $mid$ distance apart").
      else {
        high = mid - 1;
      }
    }

    // Print the maximum possible distance
    cout << ans << "\n";
  }

  return 0;
}
