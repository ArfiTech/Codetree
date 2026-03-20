n = int(input())

# Please write your code here.
# memoization
# memo = [-1] * (n+1)
# def fibb(n):
#     if memo[n] != -1:
#         return memo[n]
#     if n <= 2:
#         memo[n] = 1
#     else:
#         memo[n] = fibb(n-1) + fibb(n-2)
#     return memo[n]

# print(fibb(n))

# tabulation
dp = [0] * (n+1)
dp[1] = 1
dp[2] = 1
for i in range(3, n+1):
    dp[i] = dp[i-1] + dp[i-2]

print(dp[n])