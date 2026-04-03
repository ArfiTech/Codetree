n = int(input())
r1, c1, r2, c2 = map(int, input().split())

# Please write your code here.
from collections import deque

q = deque()
visited = [[False for _ in range(n)] for _ in range(n)]
step = [[0 for _ in range(n)] for _ in range(n)]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

def can_go(x, y):
    if not in_range(x, y):
        return False
    
    if visited[x][y]:
        return False
    
    return True

def push(x, y, s):
    step[x][y] = s
    visited[x][y] = True
    q.append((x, y))

def bfs():
    # dxs, dys = [1, 0, -1, 0], [0, 1, 0, -1]
    dxs, dys = [2, 1, -1, -2, -2, -1, 1, 2], [-1, -2, -2, -1, 1, 2, 2, 1]
    while q:
        x, y = q.popleft()
        for dx, dy in zip(dxs, dys):
            new_x, new_y = x + dx, y + dy
            if can_go(new_x, new_y):
                push(new_x, new_y, step[x][y]+1)

push(r1-1, c1-1, 0)
bfs()
# print(step)
if step[r2-1][c2-1] == 0:
    print(-1)
else:
    print(step[r2-1][c2-1])