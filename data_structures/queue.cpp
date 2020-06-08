/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file queue.cpp
 *  This implementations the queue data structure.
 */

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

#define PB push_back
#define QUEUE_HEADER "[QUEUE] "

/* Queue implementation */
class Queue
{
public:
  Queue()
  {
    cout << QUEUE_HEADER << "Queue created!"
         << "\n";
  }

  ~Queue()
  {
    cout << QUEUE_HEADER << "Queue deleted!"
         << "\n";
  }

  void enqueue(int x)
  {
    this->queue.PB(x);
    cout << QUEUE_HEADER << "Successfully enqueued " << to_string(x) << " to the queue!"
         << "\n";
    this->size++;
  }

  /* Returns true if pop() was successful */
  bool dequeue()
  {
    if (this->isEmpty())
    { // Check that queue is not empty
      cout << QUEUE_HEADER << "The queue is empty, so dequeue() is not available!"
           << "\n";
      return false;
    }

    this->queue.erase(this->queue.begin());

    this->size--;

    return true;
  }

  vector<int> getSize()
  {
    int bytes = this->getBytes();
    int queue_size = this->size;
    cout << QUEUE_HEADER << "The number of elements in the queue is: " << to_string(queue_size) << " and " << to_string(bytes) << " bytes!"
         << "\n";
    return vector<int>{queue_size, bytes};
  }

  bool isEmpty()
  {
    bool empty = this->size == 0;

    if (empty)
      cout << QUEUE_HEADER << "The queue is empty!"
           << "\n";
    else
      cout << QUEUE_HEADER << "The queue is not empty!"
           << "\n";

    return empty;
  }

  int getBytes()
  {
    // Source: https://stackoverflow.com/questions/17254425/getting-the-size-in-bytes-of-a-vector
    int bytes = sizeof(vector<int>) + (sizeof(int) * this->queue.size());

    cout << QUEUE_HEADER << "The queue size is " << to_string(bytes) << " bytes!"
         << "\n";

    return bytes;
  }

  void printQueue()
  {
    if (this->isEmpty())
      cout << QUEUE_HEADER << "Queue is empty!"
           << "\n";
    else
    {
      cout << QUEUE_HEADER;

      for (int i : this->queue)
      {
        cout << i << " ";
      }

      cout << "\n";
    }
  }

private:
  vector<int> queue;
  int size = 0;
};

int main()
{
  /* Queue test code */
  Queue *queue = new Queue();

  for (int i = 1; i <= 10; i++)
  {
    queue->enqueue(i);
  }

  assert(queue->getSize()[0] == 10);
  queue->printQueue();
  queue->dequeue();
  queue->printQueue();

  assert(queue->getSize()[0] == 9);

  delete queue;

  return 0;
}
