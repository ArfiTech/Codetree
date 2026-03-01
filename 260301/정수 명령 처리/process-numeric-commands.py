N = int(input())
command = []
value = []

for _ in range(N):
    line = input().split()
    command.append(line[0])
    if line[0] == "push":
        value.append(int(line[1]))
    else:
        value.append(0)

# Please write your code here.
class Stack:
    def __init__(self):
        self.items = []
    
    def push(self, item):
        self.items.append(item)
    
    def size(self):
        return len(self.items)
    
    def empty(self):
        return 1 if not self.items else 0
    
    def top(self):
        if self.empty():
            raise Exception("Stack is empty")
        return self.items[-1]
    
    def pop(self):
        if self.empty():
            raise Exception("Stack is empty")
        
        return self.items.pop()

s = Stack()
for com, val in zip(command, value):
    if com == "push":
        s.push(val)
    elif com == "size":
        print(s.size())
    elif com == "empty":
        print(s.empty())
    elif com == "top":
        print(s.top())
    else:
        print(s.pop())
