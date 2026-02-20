arr = list(map(int, input().split()))

# Please write your code here.
arr.sort()
a, b, c, a_b_c_d = arr[0], arr[1], arr[2], arr[-1]
d = a_b_c_d - a - b - c

print(a, b, c, d)