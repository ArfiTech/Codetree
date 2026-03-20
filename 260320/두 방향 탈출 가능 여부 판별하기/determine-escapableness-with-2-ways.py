n, m = map(int, input().split())
# edges = [tuple(map(int, input().split())) for _ in range(m)]
edges = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
visited = [[False for _ in range(m)] for _ in range(n)]
res = 0

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < m

def can_go(x, y):
    if not in_range(x, y):
        return False
    if visited[x][y] or edges[x][y] == 0:
        return False
    return True

def dfs(x, y):
    global res
    dxs, dys = [1, 0], [0, 1]
    # print("orig: ", x, y)
    for dx, dy in zip(dxs, dys):
        new_x, new_y = x + dx, y + dy
        if new_x == n-1 and new_y == m-1:
            # print("--- ", new_x, new_y)
            res = 1
        if can_go(new_x, new_y):
            # print(new_x, new_y)
            dfs(new_x, new_y)

dfs(0, 0)
print(res)
