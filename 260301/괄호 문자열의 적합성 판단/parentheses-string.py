str = input()

# Please write your code here.
arr = []
for i, s in enumerate(str):
    if s == '(':
        arr.append(s)
    else:
        if len(arr) > 0:
            if arr[-1] == '(':
                arr.pop()
        else:
            arr.append(s)
            break
    
if len(arr) <= 0:
    print("Yes")
else:
    print("No")
