n = int(input())
cmd = []
num = []

for _ in range(n):
    line = input().split()
    cmd.append(line[0])
    if line[0] in ["push_front", "push_back"]:
        num.append(int(line[1]))
    else:
        num.append(0)

# Please write your code here.
from collections import deque

dq = deque()
for c, n in zip(cmd, num):
    if c == "push_front":
        dq.appendleft(n)
    elif c == "push_back":
        dq.append(n)
    elif c == "pop_front":
        print(dq.popleft())
    elif c == "pop_back":
        print(dq.pop())
    elif c == "size":
        print(len(dq))
    elif c == "empty":
        res = 1 if not dq else 0
        print(res)
    elif c == "front":
        print(dq[0])
    else:
        print(dq[-1])