#include <iostream>
#include <vector>

using namespace std;

vector<int> ugly_numbers(int n)
{
  vector<int> ugly_number = {1};

  for (int i = 0; i <= n; i++)
  {
    if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
    {
      ugly_number.push_back(i);
    }
  }

  return ugly_number;
}

int main()
{
  int n;
  cout << "Enter the n-th number: ";
  cin >> n;

  cout << "Ugly numbers up to the " << n << "-th number:"
       << "\n";

  vector<int> ugly = ugly_numbers(n);

  for (int i : ugly)
  {
    cout << i << " ";
  }

  cout << "\n";

  return 0;
}
