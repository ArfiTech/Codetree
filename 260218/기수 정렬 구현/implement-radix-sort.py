n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
max_value = max(arr)
# print(max_value)

for i in range(len(str(max_value))-1, -1, -1):
    new_arr = [[] for _ in range(10)]
    for v in arr:
        cur_v = ''
        if len(str(v)) < len(str(max_value)):
            cur_v = '0'*(len(str(max_value)) - len(str(v))) + str(v)
        else:
            cur_v = str(v)
        new_arr[int(cur_v[i])].append(v)
    
    # print(new_arr)
    update_arr = []
    for l in new_arr:
        if len(l) > 0:
            for e in l:
                update_arr.append(e)
    arr = update_arr

for i in arr:
    print(i, end=" ")

