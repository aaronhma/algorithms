#include <iostream>
#include <stack>

using namespace std;

int main()
{
  // Stack
  stack<int> stack;

  for (int i = 1; i <= 10; i++)
  {
    stack.push(i);
  }

  cout << "Size of stack: " << stack.size() << "\n";
  cout << "First element (pop): " << stack.top() << "\n";
  stack.pop();
  cout << "First element (pop): " << stack.top() << "\n";
  stack.pop();

  return 0;
}
