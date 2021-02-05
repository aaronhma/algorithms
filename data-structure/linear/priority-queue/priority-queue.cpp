#include <bits/stdc++.h>

using namespace std;

int main()
{
  std::priority_queue<int> queue;
  queue.push(25);
  queue.push(100);
  queue.push(75);
  queue.push(125);
  queue.push(50);

  while (!queue.empty()) // as long as we still have data in the priority queue...
  {
    cout << "The size of the priority queue is: " << to_string(queue.size()) << " elements!"
         << "\n";
    cout << "Top element: " <<  to_string(queue.top())) << "\n"; // 125 100 75 50 25
    queue.pop();                                                 // pops the max element
  }

  return 0;
}
