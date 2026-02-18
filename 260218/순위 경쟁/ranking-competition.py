n = int(input())
c, s = [], []
for _ in range(n):
    ci, si = input().split()
    c.append(ci)
    s.append(int(si))

# Please write your code here.
score = [0, 0, 0]
hall_of_fame = ['A', 'B', 'C']
changed = 0
for p, num in zip(c, s):
    cur_hof = [x for x in hall_of_fame]
    if p == 'A':
        score[0] += num
    elif p == 'B':
        score[1] += num
    else:
        score[2] += num

    if score[0] >= score[1] and score[0] >= score[2] and 'A' not in cur_hof:
        cur_hof.append('A')
    elif (score[0] < score[1] or score[0] < score[2]) and 'A' in cur_hof:
        cur_hof.remove('A')
    if score[1] >= score[0] and score[1] >= score[2] and 'B' not in cur_hof:
        cur_hof.append('B')
    elif (score[1] < score[0] or score[1] < score[2]) and 'B' in cur_hof:
        cur_hof.remove('B')
    if score[2] >= score[1] and score[2] >= score[0] and 'C' not in cur_hof:
        cur_hof.append('C')
    elif (score[2] < score[1] or score[2] < score[0]) and 'C' in cur_hof:
        cur_hof.remove('C')
    
    cur_hof.sort()
    # print(score)
    # print(cur_hof)
    # print(hall_of_fame)
    if cur_hof != hall_of_fame:
        changed += 1
        hall_of_fame = cur_hof

print(changed)