# `static` Keyword in C++

## Static Variables

When a variable is declared as static, space for it gets allocated for the lifetime of the program.

```cpp
#include <bits/stdc++.h>

using namespace std;

// static int count = 0;
// is the equivalent of doing the following **globally**
// int count = 0;

void demo()
{
    // static variable
    static int count = 0;
    cout << count << " ";

    // value is updated and
    // will be carried to next
    // function calls
    count++;
}

int main()
{
    for (int i=0; i<5; i++)
        demo();
    return 0;
}
```
