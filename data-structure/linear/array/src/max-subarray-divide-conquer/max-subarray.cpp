// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<long long> vll;
// typedef pair<int, int> pii;
// typedef pair<long long, long long> pll;

// int crossingSum(vector<int> &arr, int left, int mid, int right)
// {
//   int sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;

//   for (int i = mid; i >= left; i--)
//   {
//     sum += arr[i];
//     left_sum = max(left_sum, sum);
//   }

//   sum = 0;

//   for (int i = mid + 1; i <= right; i++) {
//     sum += arr[i];
//     right_sum = max(right_sum, sum);
//   }

//   return max(left_sum + right_sum, max(left_sum, right_sum));
// }

// int sum(vector<int> &arr, int left, int right)
// {
//   if (left == right)
//     return arr[left];

//   int mid = left + (right - left) / 2;

//   return max(sum(arr, left, mid), max(sum(arr, mid + 1, right), crossingSum(arr, left, mid, right)));
// }

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   // vector<int> arr = {2, 3, 4, 5, 7};

//   // cout << sum(arr, 0, arr.size() - 1) << "\n"; // 21

//   return 0;
// }
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
