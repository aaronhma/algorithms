class Stack:
    def __init__(self, max_size=10):
        self.stack = [0] * max_size
        self.curr_size = 0
        self.max_size = max_size
        self.next_empty = 0

    def push(self, x: int) -> None:
        if self.curr_size == self.max_size:
            self._allocate_more_space()

        self.stack[self.next_empty] = x
        self.next_empty += 1
        self.curr_size += 1

    def size(self) -> int:
        return self.curr_size

    def empty(self) -> bool:
        return self.size() == 0

    def pop(self) -> int:
        if self.empty():
            return -1

        to_delete = self.next_empty - 1
        current = self.stack[to_delete]
        self.stack[to_delete] = 0
        self.curr_size -= 1
        self.next_empty -= 1

        return current

    def print(self) -> None:
        for i in range(0, self.next_empty):
            print(self.stack[i])

    def _allocate_more_space(self) -> None:
        new_size = self.curr_size * 2
        new_stack = [0] * new_size

        for i in range(0, self.curr_size):
            new_stack[i] = self.stack[i]

        self.stack = new_stack
        self.max_size = new_size


if __name__ == "__main__":
    try:
        stack = Stack(10)
        assert(stack.size() == 0)
        assert(stack.empty())
        assert(stack.max_size == 10)

        for i in range(1, 12):
            stack.push(i)

        assert(stack.size() == 11)
        stack.push(12)
        assert(stack.size() == 12)
        stack.print()
        assert(not stack.empty())

        stack.pop()
        stack.print()

        assert(stack.size() == 11)
        assert(stack.pop() == 11)
        assert(stack.size() == 10)

        stack.print()

        for i in range(0, 11):
            stack.pop()

        assert(stack.size() == 0)
        assert(stack.empty())
        assert(stack.pop() == -1)

        print("All tests passed!")

    except:
        print("Tests failed!")
