n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
arr.sort()
print(arr[n+1] - arr[n-2])