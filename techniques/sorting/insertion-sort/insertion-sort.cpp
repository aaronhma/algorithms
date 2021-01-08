#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

typedef vector<int> vi;

void insertion_sort(vi &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    while (i > 0 && arr[i - 1] >= arr[i])
    {
      int temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      i--;
    }
  }
}

bool test_function(vector<vi> input)
{
  vi test_case = input[0];
  vi expected = input[1];
  insertion_sort(test_case);

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
