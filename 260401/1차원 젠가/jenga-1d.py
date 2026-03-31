n = int(input())

blocks = []
for _ in range(n):
    b = int(input())
    blocks.append(b)

s1, e1 = map(int, input().split())
s2, e2 = map(int, input().split())

# Please write your code here.
temp = []
# temp_p = -1

for i in range(n):
    if i < s1-1 or i >= e1:
        temp.append(blocks[i])

blocks = temp

temp = []
for i in range(len(blocks)):
    if i < s2-1 or i >= e2:
        temp.append(blocks[i])

print(len(temp))
for t in temp:
    print(t)