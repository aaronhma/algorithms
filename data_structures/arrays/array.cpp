/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file array.cpp
 *  This implements the Array data structure.
 */
#include "../include/header.h"
#include <sstream>

/* Declarations */
template <typename T>
std::string to_string(const T &n)
{
  std::ostringstream ss;
  ss << n;
  return ss.str();
}

#include "include/array.h"

// Array constructor
Array::Array()
{
  print("Array initialized and created!");
}

// Array deconstructor
Array::~Array()
{
  print("Array deleted!");
}

// User-interface for array
void Array::ui()
{
  int input;

  while (input /* check that input is valid */ != 0 /* 0 is either invalid input or user entered */)
  {
    print("Welcome to the Array implementation!");
    print("");
    print("=== OPTIONS ===");
    print("0. Exit");
    print("1. Insert element");
    print("2. Get value by index");
    print("3. Sort array");
    print("4. Print array");
    print("5. Delete element");
    print("\nexperimental: 6. Clear the array!");
    std::cout << "\nWhat would you like to do?\n**Please enter an integer!**\n> ";

    std::cin >> input;

    if (input == 1)
    {
      int element;
      std::cout << "What element should be put in the array?\n> ";
      std::cin >> element;
      this->push_back(element);
    }
    else if (input == 2)
    {
      int index;
      std::cout << "What index do you want to see?\n> ";
      std::cin >> index;

      std::string index_message = "Value at index #" + to_string(index) + " => " + to_string(this->returnIndex(index));

      print(index_message);
    }
    else if (input == 3)
    {
      std::sort(arr_.begin(), arr_.end());
      print("Finished sorting!");
    }
    else if (input == 4)
    {
      print("Printing array...");
      this->printArray();
    }
    else if (input == 5)
    {
      int to_delete;
      std::cout << "What item would you like to delete?\n> ";
      std::cin >> to_delete;

      bool success = this->deleteSuccess(to_delete);

      std::string success_message = "Deleted " + to_string(to_delete) + " in the array!";
      std::string fail_message = to_string(to_delete) + " not in the array!";

      if (success)
        print(success_message);
      else
        print(fail_message);
    }
    else if (input == 6)
    {
      this->arr_.clear();
    }
    else
    {
      print("Because you didn't enter an integer, bye!");
    }
  }
}

int main()
{
  Array *arr = new Array();
  arr->ui();

  delete arr;

  return 0;
}
