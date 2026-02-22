n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
import sys
INT_MAX = sys.maxsize

arr.sort()
min_max = INT_MAX
for i in range(n):
    min_max = min(min_max, arr[i+n] - arr[i])

print(min_max)