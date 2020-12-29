/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file array.h
 *  This file is the header file for the Array data structure.
 */
#pragma once

#define PB push_back
#define FAIL -1

class Array
{
public:
  /* This is the public Array interface. */
  Array();
  ~Array();

  int size()
  {
    return this->arr_.size();
  }

  bool empty()
  {
    return this->size() == 0;
  }

  int operator[](int index)
  {
    if (this->empty())
    {
      return FAIL;
    }
    else
    {
      if (index >= 0 && index <= this->size())
      {
        return this->arr_[index];
      }
      else
      {
        return FAIL;
      }
    }
  }

  void fill(const int to_fill, const int items_to_fill)
  {
    for (int i = 1; i <= items_to_fill; i++)
    {
      this->arr_.PB(to_fill);
    }
  }

  void push_back(int value)
  {
    this->arr_.PB(value);
  }

  void ui();

  int front()
  {
    if (!this->empty())
      return this->arr_[0];
    else
      return -1;
  }

  int back()
  {
    if (!this->empty())
    {
      int last = this->size() - 1;
      return this->arr_[last];
    }
    else
    {
      return -1;
    }
  }

private:
  vint arr_;

  int returnIndex(int index)
  {
    return this->arr_[index];
  }
  // TODO: Include the sorting algorithms
  // void mergeSort(std::vector<int> arr)
  // {
  //   if (this->empty())
  //     return;
  //   int pivot = arr_[0];
  //   std::vector<int> low;
  //   std::vector<int> high;
  //   std::vector<int> low_mod;

  //   for (int i = 0; i < this->size(); i++)
  //   {
  //     if (this->arr_[i] <= pivot)
  //     {
  //       low.PB(this->arr_[i]);
  //     }
  //     else
  //     {
  //       high.PB(this->arr_[i]);
  //     }
  //   }

  //   for (long unsigned int i = 1; i < low.size(); i++)
  //   {
  //     low_mod.PB(low[i]);
  //   }

  //   arr_ = this->mergeSort(low_mod) + this->mergeSort(high);
  // }

  void printArray()
  {
    for (int i = 0; i < this->size(); i++)
    {
      std::cout << this->arr_[i] << " ";
    }

    std::cout << "\n";
  }

  bool deleteSuccess(int element)
  {
    for (int i = 0; i < this->size(); i++)
    {
      if (this->arr_[i] == element)
      {
        this->arr_.erase(this->arr_.begin() + i);
        return true;
      }
    }

    return false;
  }
};
