class Queue:
    def __init__(self, max_size=10):
        self.queue = [0] * max_size
        self.size = 0
        self.next_empty = 0

    def enqueue(self, x: int):
        self.queue[self.next_empty] = x
        self.size += 1
        self.next_empty += 1
