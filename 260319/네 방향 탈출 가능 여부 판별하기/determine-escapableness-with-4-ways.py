n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
from collections import deque

q = deque()

dxs, dys = [1, 0, -1, 0], [0, 1, 0, -1]
visited = [[False for _ in range(m)] for _ in range(n)]

def in_range(x, y):
    return x < n and x >= 0 and y < m and y >= 0

def can_go(x, y):
    if not in_range(x, y):
        return False
    if visited[x][y] == True or a[x][y] == 0:
        return False
    return True

def push(x, y):
    # global order

    # answer[x][y] == order
    # order += 1
    visited[x][y] = True
    q.append((x, y))

def bfs():
    while q:
        x, y = q.popleft()
        # print("origin: ", x, y)
        for dx, dy in zip(dxs, dys):
            next_x, next_y = x + dx, y + dy
            if can_go(next_x, next_y):
                # print("-- ", next_x, next_y)
                if next_x == n-1 and next_y == m-1:
                    return 1
                else:
                    push(next_x, next_y)
    return 0

push(0, 0)
print(bfs())

            