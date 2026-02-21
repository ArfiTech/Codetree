n = int(input())
sequence = list(map(int, input().split()))

# Please write your code here.
import sys
INT_MAX = sys.maxsize
cnt = 0
while True:
    is_sorted = True
    min_ = INT_MAX
    for i in range(n):
        if sequence[i] > sequence[0]:
            min_ = min(min_, sequence[i])
            is_sorted = False
    if is_sorted:
        print(cnt)
        break
    else:
        min_index = sequence.index(min_)
        sequence[min_index], sequence[0] = sequence[0], sequence[min_index]
        cnt += 1
