N = int(input())
numbers = list(map(int, input().split()))

# Please write your code here.
import sys

odds = [x for x in numbers if x % 2 == 1]
evens = [x for x in numbers if x % 2 == 0]

# print(odds)
# print(evens)
tot_pack = 0

if len(evens) == 0 and len(odds) < 2:
    print(0)
    sys.exit(0)

if len(evens) - len(odds) > 1:
    if len(odds) == 0:
        print(1)
    else:
        print(len(odds)*2 + 1)
    sys.exit(0)

if len(evens) > 0:
    use_odds = len(odds) - len(evens) + 1
    tot_pack += 2*len(evens)-1
else:
    use_odds = len(odds) - 2
    tot_pack= 1

if use_odds > 0:
    # print("---", tot_pack)
    # print("@@@", use_odds)
    # 홀수부터 시작
    t = 0
    plus = 0
    for i in range(use_odds):
        if i % 3 == 1:
            plus = t-1
        else:
            t += 1
            plus = t
        # print(i, plus)
    tot_pack += plus


print(tot_pack) 