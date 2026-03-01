N = int(input())
command = []
A = []

for _ in range(N):
    line = input().split()
    command.append(line[0])
    if line[0] == "push":
        A.append(int(line[1]))
    else:
        A.append(0)

# Please write your code here.
from collections import deque

class Queue:
    def __init__(self):
        self.arr = deque()
    
    def push(self, item):
        self.arr.append(item)
    
    def empty(self):
        return 1 if not self.arr else 0
    
    def size(self):
        return len(self.arr)
    
    def pop(self):
        if self.empty():
            raise Exception("Queue is empty")
        return self.arr.popleft()
    
    def front(self):
        if self.empty():
            raise Exception("Queue is empty")
        return self.arr[0]

q = Queue()
for com, val in zip(command, A):
    if com == 'push':
        q.push(val)
    elif com == 'pop':
        print(q.pop())
    elif com == 'size':
        print(q.size())
    elif com == 'empty':
        print(q.empty())
    else:
        print(q.front())