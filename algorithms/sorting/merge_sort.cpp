#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

typedef vector<int> vi;

vi merge(vi left, vi right)
{
  vi sorted;
  long unsigned int left_index = 0;
  long unsigned int right_index = 0;

  while (left_index < left.size() and right_index < right.size())
  {
    if (left[left_index] < right[right_index])
    {
      sorted.push_back(left[left_index]);
      left_index++;
    }

    else
    {
      sorted.push_back(right[right_index]);
      right_index++;
    }
  }

  for (long unsigned int i = left_index; i < left.size(); i++)
  {
    sorted.push_back(left[i]);
  }

  for (long unsigned int i = right_index; i < right.size(); i++)
  {
    sorted.push_back(right[i]);
  }

  return sorted;
}

vi merge_sort(vi arr)
{
  if (arr.size() < 2)
    return arr;

  int mid = arr.size() / 2;

  vi mid_less, mid_high;

  for (int i = 0; i < mid; i++)
  {
    mid_less.push_back(arr[i]);
  }

  for (long unsigned int i = mid; i < arr.size(); i++)
  {
    mid_high.push_back(arr[i]);
  }

  return merge(merge_sort(mid_less), merge_sort(mid_high));
}

bool test_function(vector<vi> input)
{
  vi test_case = input[0];
  vi expected = input[1];
  test_case = merge_sort(test_case);

  for (int i : test_case)
  {
    cout << i << " ";
  }

  cout << "\n";

  if (test_case == expected)
  {
    cout << "Pass"
         << "\n";

    return true;
  }
  else
    cout << "Fail"
         << "\n";

  return false;
}

int main()
{
  vector<vi> input_1 = {vi{3, 2, 1}, vi{1, 2, 3}};
  assert(test_function(input_1));

  vector<vi> input_2 = {vi{1, 2, 3}, vi{1, 2, 3}};
  assert(test_function(input_2));

  vector<vi> input_3 = {vi{}, vi{}};
  assert(test_function(input_3));

  return 0;
}
