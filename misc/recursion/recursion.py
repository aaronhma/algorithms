def fib(n: int) -> int:
    if n <= 1:
        return n

    return n * fib(n - 1)
