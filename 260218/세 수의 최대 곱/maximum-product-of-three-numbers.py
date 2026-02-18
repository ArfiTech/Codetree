n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
import sys
INT_MAX = sys.maxsize

pos = [x for x in arr if x > 0]
neg = [x for x in arr if x < 0]
zero = True if 0 in arr else False

pos.sort()
neg.sort()

# case 1) all pos
if len(pos) > 2:
    case1_list = pos[-3:]
    case1 = case1_list[0] * case1_list[1] * case1_list[2]
else:
    case1 = -INT_MAX

# case 2) all neg
if len(neg) > 2:
    case2_list = neg[-3:]
    case2 = case2_list[0] * case2_list[1] * case2_list[2]
else:
    case2 = -INT_MAX

# case 3) +--
if len(pos) > 0 and len(neg) > 1:
    case3_list = pos[-1:] + neg[:2]
    case3 = case3_list[0] * case3_list[1] * case3_list[2]
else:
    case3 = -INT_MAX

# case 4) ++-
if len(pos) > 1 and len(neg) > 0:
    case4_list = pos[:2] + neg[-1:]
    case4 = case4_list[0] * case4_list[1] * case4_list[2]
else:
    case4 = -INT_MAX

# case 5) with 0
if zero:
    case5 = 0
else:
    case5 = -INT_MAX

res = max(case1, case2, case3, case4, case5)
print(res)