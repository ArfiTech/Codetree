n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
max_sum = 0
for i in range(n):
    for j in range(n):
        if i + 2 < n and j + 2 < n:
            s = 0
            for k in range(3):
                for l in range(3):
                    if grid[i+k][j+l] == 1:
                        s += 1
            max_sum = max(max_sum, s)

print(max_sum)