n, t = map(int, input().split())
up = list(map(int, input().split()))
down = list(map(int, input().split()))

# Please write your code here.
temp = 0
for _ in range(t):
    temp = up[n-1]
    for i in range(n-1, 0, -1):
        up[i] = up[i-1]
        # print(i, "up: ", up)
    up[0] = down[n-1]
    for i in range(n-1, 0, -1):
        down[i] = down[i-1]
        # print(i, "down: ", down)
    down[0] = temp

for i in range(n):
    print(up[i], end=" ")
print()
for i in range(n):
    print(down[i], end=" ")