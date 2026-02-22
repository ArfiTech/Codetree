n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
arr.sort()
idx_1 = (n-1)//2
idx_2 = ((2*n-1)+n)//2

print(arr[idx_2] - arr[idx_1])