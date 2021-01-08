#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

typedef vector<int> vi;

vi selection_sort(vi arr)
{
  for (long unsigned int i = 0; i < arr.size(); i++)
  {
    int smallest_index = i;

    for (long unsigned int j = i + 1; j < arr.size(); j++)
    {
      if (arr[j] < arr[smallest_index])
      {
        smallest_index = j;
      }

      int temp = arr[i];
      arr[i] = arr[smallest_index];
      arr[smallest_index] = temp;
    }
  }

  return arr;
}

bool test_function(vector<vi> input)
{
  vi test_case = input[0];
  vi expected = input[1];
  test_case = selection_sort(test_case);

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
