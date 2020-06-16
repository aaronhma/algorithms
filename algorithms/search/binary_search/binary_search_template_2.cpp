#include "../../../data_structures/include/header.h"

using namespace std;

int binarySearch(vector<int> arr, int target)
{
  int low = 0, high = arr.size() - 1;

  while (low < high)
  {
    long long mid = low + (high - low) / 2;
    long long guess = arr[mid];

    if (guess == target)
    {
      high = mid;
    }
    else
    {
      low = mid + 1;
    }
  }

  return high;
}

int main()
{
  vector<int> input;
  int target, size, temp, index = 0;

  cout << "How many numbers will be in the input array?\n> ";
  cin >> size;

  while (size--)
  {
    cout << "Enter integer input for index #" << to_string(index) << ":\n> ";
    cin >> temp;
    input.PB(temp);
    index++;
  }

  cout << "What is the target to search for in the array?\n\t\u2022 NOTE: This number doesn't have to be in the array! :)\n> ";
  cin >> target;

  int result = binarySearch(input, target);

  if (result == -1)
  {
    cout << "The target " << to_string(target) << " is not inside the array!"
         << "\n";
  }
  else
  {
    cout << "Found target " << to_string(target) << " in the array at index #" << to_string(result) << "!"
         << "\n";
  }

  return 0;
}
