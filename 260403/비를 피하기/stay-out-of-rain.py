n, h, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
from collections import deque
import sys
MAX_INT = sys.maxsize

q = deque()
pos_people = []
pos_shelter = []
for i in range(n):
    for j in range(n):
        if grid[i][j] == 2:
            pos_people.append((i, j))
        if grid[i][j] == 3:
            pos_shelter.append((i, j))
results = [[0 for _ in range(n)] for _ in range(n)]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

def can_go(x, y):
    if not in_range(x, y):
        return False
    
    if visited[x][y] or grid[x][y] == 1:
        return False
    
    return True

def push(x, y, s):
    steps[x][y] = s
    visited[x][y] = True
    q.append((x, y))

def bfs():
    dxs, dys = [1, 0, -1, 0], [0, 1, 0, -1]
    while q:
        x, y = q.popleft()
        for dx, dy in zip(dxs, dys):
            new_x, new_y = x + dx, y + dy
            if can_go(new_x, new_y):
                push(new_x, new_y, steps[x][y] + 1)

for x, y in pos_people:
    visited = [[False for _ in range(n)] for _ in range(n)]
    steps = [[0 for _ in range(n)] for _ in range(n)]
    push(x, y, 0)
    bfs()
    # print(steps)
    is_shelter = False
    min_shelter = MAX_INT
    # res_x, res_y = -1, -1
    for r_x, r_y in pos_shelter:
        if steps[r_x][r_y] != 0 and min_shelter > steps[r_x][r_y]:
            # res_x, res_y = r_x, r_y
            min_shelter = steps[r_x][r_y]
            is_shelter = True
    if is_shelter:
        results[x][y] = min_shelter
    else:
        results[x][y] = -1

for i in range(n):
    for j in range(n):
        print(results[i][j], end=" ")
    print()
    
