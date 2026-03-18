n, k = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]
points = [tuple(map(int, input().split())) for _ in range(k)]

# Please write your code here.
from collections import deque

q = deque()
dxs, dys = [1, 0, -1, 0], [0, 1, 0, -1]
visited = [[False for _ in range(n)] for _ in range(n)]
counts = [[0 for _ in range(n)] for _ in range(n)]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

def can_go(x, y):
    if not in_range(x, y):
        return False
    if visited[x][y] == True or grid[x][y] == 1:
        return False
    return True

def push(x, y):
    counts[x][y] = 1
    visited[x][y] = True
    q.append((x, y))

def bfs():
    while q:
        x, y = q.popleft()
        for dx, dy in zip(dxs, dys):
            new_x, new_y = x + dx, y + dy
            if can_go(new_x, new_y):
                push(new_x, new_y)
    visited = [[False for _ in range(n)] for _ in range(n)]

for x, y in points:
    push(x-1, y-1)
    bfs()

summ = 0
for i in range(n):
    summ += sum(counts[i])

print(summ)

# print(counts)