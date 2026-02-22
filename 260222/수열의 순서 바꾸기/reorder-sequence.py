n = int(input())
sequence = list(map(int, input().split()))

# Please write your code here.
t = 0
for i in range(n-1, 1, -1):
    if sequence[i] < sequence[i-1]:
        t = i
print(t)
# import sys
# INT_MAX = sys.maxsize
# cnt = 0
# sorted_seq = sorted(sequence)
# fdsa = 0
# while True:
#     if sequence == sorted_seq:
#         print(cnt)
#         break
#     # is_sorted = True
#     if sequence[0] > sequence[-1]:
#         t = sequence.pop(0)
#         sequence.append(t)
#         cnt += 1
#         # is_sorted = False
#     else:
#         insert_idx = -1
#         _min = INT_MAX
#         for i in range(n-1, 1, -1):
#             # print(i)
#             if sequence[i] > sequence[0] and sequence[i] - sequence[i-1] != 1:
#                 # print("i", i)
#                 if _min > sequence[i]:
#                     insert_idx = i-1
#                     _min = sequence[i]
#                 # is_sorted = False
#                 # break
#         # print(insert_idx)
#         if insert_idx > -1:
#             t = sequence.pop(0)
#             sequence.insert(insert_idx, t)
#             cnt += 1
    # print(sequence)
# print(0)
# while True:

#     # if fdsa > 2:
#     #     print("**", cnt)
#     #     break

#     _min = INT_MAX
#     for i in range(1, n):
#         if sequence[0] < sequence[i]:
#             print(i)
#             _min = min(_min, sequence[i])
#             print("_min", _min)
#             is_sorted = False

#     if is_sorted:
#         print(cnt)
#         break
#     else:
#         min_index = sequence.index(_min)
#         min_index -= 1
#         sequence[0], sequence[min_index] = sequence[min_index], sequence[0]
#         cnt += 1



    # fdsa += 1
    # if fdsa > 2:
    #     print(cnt)
    #     break
    # if sequence == sorted_seq:
    #     print(cnt)
    #     break
    # else:
    #     asdf = INT_MAX
    #     for i in range(1, n):
    #         if sequence[i] > sequence[0]:
    #             # print("---", i)
    #             asdf = min(asdf, sequence[i])
    #             # print(asdf)
    #             # is_sorted = False
    #     print("**", asdf)
    #     min_index = sequence.index(asdf)
    #     sequence[min_index], sequence[0] = sequence[0], sequence[min_index]
    #     print(sequence)
    #     cnt += 1
    # fdsa += 1

