# Implicit vs. Explicit Functions

#### **[Learn more](http://www.cplusplus.com/forum/beginner/10207/#msg47694)**

## Implicit Function

An implicit function is a function where the compiler assumes that the function is declared & defined elsewhere.

```cpp
int main() {
  // implicit function:
  printf("Hello world!\n");  /* printf() !!?? what's that? */
  return 0;
}
```

## Explicit Functions

An explicit function is a function that is explicitly defined (eg. user-created functions).

```cpp
void print_sum(int a, int b);  /* explicit declaration */

int main() {
  print_sum(27, 15);  /* happy compiler */
  return 0;
}

void print_sum(int a, int b) {/* definition */
  printf( "%d + %d = %d\n", a, b, a + b );  /* implicit function use */
}
```
