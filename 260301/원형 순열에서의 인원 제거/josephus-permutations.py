n, k = map(int, input().split())

# Please write your code here.
from collections import deque
arr = deque()
for i in range(1, n+1):
    arr.append(i)

while len(arr) > 0:
    for _ in range(k-1):
        arr.append(arr.popleft())
    print(arr.popleft(), end=" ")