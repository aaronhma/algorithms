/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file data_structures/queue/include.queue.h
 *  This file implements the Queue data structure.
 */
#pragma once

class Queue
{
public:
  // Queue constructor
  Queue()
  {
    print("Queue initialized and created!");
    this->array_size = 0;
  }

  // Queue deconstructor
  ~Queue()
  {
    print("Queue deleted!");
  }

  bool empty()
  {
    return this->size() == 0;
  }

  int size()
  {
    return this->array_size;
  }

  void enqueue(int x)
  {
    this->queue.PB(x);
    this->array_size++;
  }

  void dequeue()
  {
    if (this->empty())
    {
      print("Queue empty!");
      return;
    }

    this->queue.erase(this->queue.begin());
    this->array_size--;
    print("Removed first element from queue! Here's the queue:");
    this->printQueue();
  }

  void printQueue()
  {
    for (int i = 0; i < this->size(); i++)
    {
      std::cout << this->queue[i] << " ";
    }

    std::cout << "\n";
  }

  bool operator=(Queue other)
  {
    if (this->queue.size() != other.size())
    {
      return false;
    }

    for (int i = 0; i < other.size(); i++)
    {
      if (other[i] != this->queue[i])
      {
        return false;
      }
    }

    return true;
  }

  int operator[](int index)
  {
    if (index >= 0 && index < this->size())
    {
      return this->queue[index];
    }
    else
    {
      return -1;
    }
  }

  bool operator!=(Queue other)
  {
    if (other.size() != this->queue.size())
    {
      return true;
    }

    for (int i = 0; i < other.size(); i++)
    {
      if (other[i] != this->queue[i])
      {
        return true;
      }
    }

    return false;
  }

  void ui()
  {
    int input;

    while (input != 0)
    {
      print("Welcome to the Queue implementation!");
      print("");
      print("=== OPTIONS ===");
      print("0. Exit");
      print("1. Insert element");
      print("2. Get value by index");
      print("3. Sort queue");
      print("4. Print queue");
      print("5. Delete element");
      print("6. Clear the queue!");
      std::cout << "\nWhat would you like to do?\n**Please enter an integer!**\n> ";

      std::cin >> input;

      if (input == 1)
      {
        int element;
        std::cout << "What element should be put in the queue?\n> ";
        std::cin >> element;
        this->enqueue(element);
        print("\nHere's what's inside the queue:");
        this->printQueue();
      }
      else if (input == 2)
      {
        int index;
        std::cout << "What index do you want to see?\n> ";
        std::cin >> index;

        std::string index_message = "Value at index #" + std::to_string(index) + " => " + std::to_string(this->queue[index]);

        print(index_message);
      }
      else if (input == 3)
      {
        std::sort(queue.begin(), queue.end());
        print("Finished sorting queue!");
      }
      else if (input == 4)
      {
        print("Printing queue...");
        this->printQueue();
      }
      else if (input == 5)
      {
        this->dequeue();
      }
      else if (input == 6)
      {
        this->queue.clear();
        print("Cleared queue!");
      }
      else
      {
        print("Because you didn't enter an integer, bye!");
      }
    }
  }

private:
  vint queue;
  long unsigned int array_size;
};
