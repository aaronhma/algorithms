/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file priority_queue.cpp
 *  This implementations the priority queue data structure.
 */
#include "include/header.h"

using namespace std;

#define PRIORITY_QUEUE_HEADER "[PRIORITY QUEUE] "

/* Priority Queue implementation */
class PriorityQueue
{
public:
  PriorityQueue()
  {
    cout << PRIORITY_QUEUE_HEADER << "Priority Queue created!"
         << "\n";
  }

  ~PriorityQueue()
  {
    cout << PRIORITY_QUEUE_HEADER << "Priority Queue deleted!"
         << "\n";
  }

  void insert(int x)
  {
    this->priority_queue.PB(x);
    cout << PRIORITY_QUEUE_HEADER << "Successfully inserted " << to_string(x) << " to the priority queue!"
         << "\n";
    this->size++;
  }

  int findMinimum()
  {
    if (this->isEmpty())
    {
      cout << PRIORITY_QUEUE_HEADER << "Can't find minimum in empty priority queue!"
           << "\n";

      return -1;
    }
    else
    {
      int smallest = this->priority_queue[0];

      for (int i = 0; i < this->priority_queue.size(); i++)
      {
        if (this->priority_queue[i] < smallest)
        {
          smallest = this->priority_queue[i];
        }
      }

      cout << PRIORITY_QUEUE_HEADER << "Minimum element in priority queue: " << to_string(smallest) << "\n";

      return smallest;
    }
  }

  int findMaximum()
  {
    if (this->isEmpty())
    {
      cout << PRIORITY_QUEUE_HEADER << "Can't find maximum in empty priority queue!"
           << "\n";

      return -1;
    }
    else
    {
      int biggest = this->priority_queue[0];

      for (int i = 0; i < this->priority_queue.size(); i++)
      {
        if (this->priority_queue[i] > biggest)
        {
          biggest = this->priority_queue[i];
        }
      }

      cout << PRIORITY_QUEUE_HEADER << "Maximum element in priority queue: " << to_string(biggest) << "\n";

      return biggest;
    }
  }

  void deleteMinimum()
  {
    if (this->isEmpty())
    {
      cout << PRIORITY_QUEUE_HEADER << "Can't delete element in empty priority queue!"
           << "\n";
    }
    else
    {

      sort(this->priority_queue.begin(), this->priority_queue.end());

      this->priority_queue.erase(this->priority_queue.begin());

      this->size--;
    }
  }

  void deleteMaximum()
  {
    if (this->isEmpty())
    {
      cout << PRIORITY_QUEUE_HEADER << "Can't delete element in empty priority queue!"
           << "\n";
    }
    else
    {

      sort(this->priority_queue.begin(), this->priority_queue.end());

      this->priority_queue.pop_back();

      this->size--;
    }
  }

  bool isEmpty()
  {
    bool empty = this->size == 0;

    if (empty)
      cout << PRIORITY_QUEUE_HEADER << "The priority queue is empty!"
           << "\n";
    else
      cout << PRIORITY_QUEUE_HEADER << "The priority queue is not empty!"
           << "\n";

    return empty;
  }

  void printPriorityQueue()
  {
    if (this->isEmpty())
      cout << PRIORITY_QUEUE_HEADER << "Priority Queue is empty!"
           << "\n";
    else
    {
      cout << PRIORITY_QUEUE_HEADER;

      for (int i = 0; i < this->priority_queue.size(); i++)
      {
        cout << this->priority_queue[i] << " ";
      }

      cout << "\n";
    }
  }

private:
  vector<int> priority_queue;
  int size = 0; // disable=-Wc++11-extensions
};

int main()
{
  /* Priority Queue test code */
  PriorityQueue *priority_queue = new PriorityQueue();

  for (int i = 1; i <= 10; i++)
  {
    priority_queue->insert(i);
  }

  priority_queue->printPriorityQueue();
  priority_queue->findMaximum();
  priority_queue->findMinimum();
  priority_queue->deleteMinimum();
  priority_queue->deleteMaximum();
  priority_queue->printPriorityQueue();

  for (int i = 0; i < 8; i++)
  {
    priority_queue->deleteMaximum();
  }

  priority_queue->deleteMaximum();
  priority_queue->printPriorityQueue();

  delete priority_queue;

  return 0;
}
