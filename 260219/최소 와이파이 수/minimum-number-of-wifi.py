n, m = map(int, input().split())
arr = list(map(int, input().split()))

# Please write your code here.
cnt = 0
wified = 0
for a in arr:
    if a == 1 and wified == 0:
        cnt += 1
        wified = 2*m
    else:
        wified = wified - 1 if wified > 0 else 0

print(cnt)
