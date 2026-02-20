n = int(input())
segments = [tuple(map(int, input().split())) for _ in range(n)]

# Please write your code here.
min_line = 101
for i in range(n):
    max_point = 0
    min_point = 101
    for j in range(n):
        if j == i:
            continue
        else:
            max_point = max(max_point, segments[j][1])
            min_point = min(min_point, segments[j][0])
    min_line = min(min_line, max_point - min_point)

print(min_line)