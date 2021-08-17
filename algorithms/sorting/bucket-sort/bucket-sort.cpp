#include <bits/stdc++.h>

using namespace std;

void sort(vector<float> &arr) {
  // n: Size of array
  int n = arr.size();

  // Create our n buckets
  vector<vector<float>> buckets(n);

  // Put elements from the array into each bucket
  for (float i : arr) {
    // Bucket index: index
    int index = i * n;

    // Put i into the bucket index
    buckets[index].push_back(i);
  }

  // Sort each individual buckets
  for (int i = 0; i < n; i++)
    // TIP: Bucket sort's stability depends on the sort used here.
    // The sort used here is NOT stable, so this implementation of Bucket Sort is NOT stable.
    sort(buckets[i].begin(), buckets[i].end());

  // Because each bucket is sorted, put all the elements in each bucket into the array.
  int index = 0;

  for (int i = 0; i < n; i++)
    for (float j : buckets[i])
      arr[index++] = j;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<float> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
  sort(arr);

  // 0.1234 0.3434 0.565 0.656 0.665 0.897
  for (float i : arr) cout << i << " ";

  cout << "\n";

  return 0;
}
