n = int(input())
blocks = [int(input()) for _ in range(n)]

# Please write your code here.
total_blocks = sum(blocks)
avg_block = total_blocks // n

res = 0
for b in blocks:
    if b < avg_block:
        res += avg_block - b

print(res)