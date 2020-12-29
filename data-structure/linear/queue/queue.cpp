#include <iostream>
#include <queue>

using namespace std;

int main()
{
  // Queue
  queue<int> queue;

  for (int i = 1; i <= 10; i++)
  {
    queue.push(i);
  }

  cout << "Size of queue: " << queue.size() << "\n";
  cout << "First element (pop): " << queue.front() << "\n";
  queue.pop();
  cout << "First element (pop): " << queue.front() << "\n";
  queue.pop();

  return 0;
}
