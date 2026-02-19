arr = list(map(int, input().split()))

# Please write your code here.
arr.sort()

a = arr[0]
a_b_c = arr[-1]

arr.remove(a)
arr.remove(a_b_c)

for i in range(len(arr)):
    for j in range(i+1, len(arr)):
        if arr[i] + arr[j] == a_b_c - a:
            b = arr[i]
            c = arr[j]

print(a, b, c)