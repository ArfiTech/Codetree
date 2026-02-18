board = [list(input()) for _ in range(10)]

# Please write your code here.
b_pos = [-1, -1]
l_pos = [-1, -1]
r_pos = [-1, -1]

for i, line in enumerate(board):
    for j, elem in enumerate(line):
        if elem == 'B':
            b_pos = [i, j]
        if elem == 'L':
            l_pos = [i, j]
        if elem == 'R':
            r_pos = [i, j]

if abs(b_pos[0] - l_pos[0]) - 1 >= 0 and abs(b_pos[1] - l_pos[1]) - 1 >= 0:
    print(abs(b_pos[0] - l_pos[0]) - 1 + abs(b_pos[1] - l_pos[1]) - 1 + 1)
elif abs(b_pos[0] - l_pos[0]) - 1 < 0:
    if l_pos[0] == r_pos[0] and ((l_pos[1] > r_pos[1] and b_pos[1] < r_pos[1]) or (l_pos[1] < r_pos[1] and b_pos[1] > r_pos[1])):
        print(abs(b_pos[1] - l_pos[1]) - 1 + 2)
    else:
        print(abs(b_pos[1] - l_pos[1]) - 1)
elif abs(b_pos[1] - l_pos[1]) - 1 < 0:
    if l_pos[1] == r_pos[1] and ((l_pos[0] > r_pos[0] and b_pos[0] < r_pos[0]) or (l_pos[0] < r_pos[0] and b_pos[0] > r_pos[0])):
        print(abs(b_pos[0] - l_pos[0]) - 1 + 2)
    else:
        print(abs(b_pos[0] - l_pos[0]) - 1)
# else:
#     print(b_pos)
#     print(l_pos)

