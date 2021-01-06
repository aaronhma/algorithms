- Sum Tricks

S = 1 + 2 + ... + 2n => S = n(2n + 1)

S = 1 + 2 + ... + n => S = n(n + 1) / 2

- 2 power of K

1 << 0 # 1
1 << 1 # 2
1 << 2 # 4
1 << 3 # 8

- Number get each digit

```c++
int main()
{
  int n = 45678;
  while (n > 0)
  {
    int digit = n % 10;
    n /= 10;
    cout << digit << "\n";
  }
}
```
