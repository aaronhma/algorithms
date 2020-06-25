#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

typedef vector<int> vi;

vi quicksort(vi arr)
{
  if (arr.size() < 2)
    return arr;
  else
  {
    int pivot = arr[0];
    vi low, high;

    for (int i = 1; i < arr.size(); i++)
    {
      int data = arr[i];

      if (data <= pivot)
      {
        low.push_back(data);
      }
      else if (data > pivot)
      {
        high.push_back(data);
      }
    }

    vector<vi> sorted_2d;
    sorted_2d.push_back(quicksort(low));
    sorted_2d.push_back(vector<int>{pivot});
    sorted_2d.push_back(quicksort(high));

    vi sorted_flat;

    for (vi vector : sorted_2d)
    {
      for (int i : vector)
      {
        sorted_flat.push_back(i);
      }
    }

    return sorted_flat;
  }
}

bool test_function(vector<vi> input)
{
  vi test_case = input[0];
  vi expected = input[1];
  test_case = quicksort(test_case);

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
