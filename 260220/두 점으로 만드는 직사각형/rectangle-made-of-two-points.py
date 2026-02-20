x1, y1, x2, y2 = map(int, input().split())
a1, b1, a2, b2 = map(int, input().split())

# Please write your code here.
# if (x1 <= a1 and y1 <= b1) or (a1 <= x1 and b1 <= y1):
    # print(abs(a2 - x1)*abs(b2 - y1))
# if x1 <= a1 
# elif (a1 < x1 and x2 <= a2)

biggest_x = max(x2, a2)
smallest_x = min(x1, a1)
biggest_y = max(y2, b2)
smallest_y = min(y1, b1)

print((biggest_x - smallest_x)*(biggest_y - smallest_y))