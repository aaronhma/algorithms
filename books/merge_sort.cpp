// /* Source: https://www.geeksforgeeks.org/merge-sort/ */
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

void merge(int arr[], int low, int mid, int high)
{
  int i, j, k;
  int n1 = mid - low + low;
  int n2 = high - mid;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
  {
    L[i] = arr[low + i];
  }

  for (j = 0; j < n2; j++)
  {
    R[j] = arr[mid + low + j];
  }

  i = 0;
}

int main()
{

  return 0;
}
