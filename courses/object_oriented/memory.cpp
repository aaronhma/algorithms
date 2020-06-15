#include <iostream>

using namespace std;

void foo()
{
  int num = 48; // will have lower memory address
  cout << "Number value in foo(): " << num << "\n";
  cout << "Number address foo(): " << &num << "\n";
}

int main()
{
  int num = 20; // will have higher memory address

  cout << "Number value in main(): " << num << "\n";
  cout << "Number address in main(): " << &num << "\n";

  cout << "\n";

  foo();

  return 0;
}
