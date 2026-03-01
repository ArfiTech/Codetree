str = input()

# Please write your code here.
arr = []
for i, s in enumerate(str):
    if s == '(':
        arr.append(s)
    else:
        if arr[-1] == '(':
            arr.pop()
    
if len(arr) <= 0:
    print("Yes")
else:
    print("No")
