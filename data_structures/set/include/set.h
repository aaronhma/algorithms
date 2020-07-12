#pragma once

class SetBase
{
public:
  SetBase() {}
  ~SetBase() {}

  void insert(int x)
  {
    if (!this->isInSet(x))
    {
      this->set.PB(x);
    }
  }

  int size()
  {
    return this->set.size();
  }

  bool empty()
  {
    return this->size() == 0;
  }

  int operator[](int index)
  {
    if (index >= 0 && index < this->size())
    {
      return this->set[index];
    }
    else
    {
      return -1;
    }
  }

  bool find(int target)
  {
    sort(this->set.begin(), this->set.end());

    int low = 0, high = this->size();

    while (low <= high)
    {
      long long mid = low + (high - low) / 2;
      long long guess = this->set[mid];

      if (guess == target)
        return true;
      else if (guess < target)
        low = mid + 1;
      else
        high = mid - 1;
    }

    return false;
  }

  int count(int target)
  {
    int counter = 0;

    for (int i = 0; i < this->set.size(); i++)
    {
      if (this->set[i] == target)
        counter++;
    }

    return counter;
  }

  bool operator=(SetBase &other)
  {
    if (other.size() != this->size())
      return false;

    for (int i = 0; i < other.size(); i++)
    {
      if (other[i] != this->set[i])
        return false;
    }

    return true;
  }

private:
  vint set;

  bool isInSet(int target)
  {
    for (int i = 0; i < this->size(); i++)
    {
      if (set[i] == target)
      {
        return true;
      }
    }

    return false;
  }
};
