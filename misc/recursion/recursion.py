def fib(n: int) -> int:
    if n <= 1:
        return n

    return n * fib(n - 1)


if __name__ == "__main__":
    try:
        for i in range(0, 6):
            print(fib(i))
        assert(fib(0) == 0)
        assert(fib(1) == 1)
        assert(fib(2) == 2)
        assert(fib(3) == 6)
        assert(fib(4) == 24)
        assert(fib(5) == 120)

        print("All tests passed!")
    except:
        print("Test failed!")
