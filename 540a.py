def possTurns(poss0,poss1):
    pos0 = poss0
    turns0 = 0
    pos1 = poss0
    turns1  = 0
    while pos0 != poss1:
        turns0 += 1
        pos0 += 1
        if pos0 == 10:
            pos0 = 0
    while pos1 != poss1:
        turns1 +=1
        pos1 -= 1
        if pos1 == -1:
            pos1 = 9
    return min(turns0,turns1)

turns = 0
for i in range(int(input())):
    if i == 0:
        lock = [int(x) for x in input()]
        lock0 = [int(x) for x in input()]
    turns += possTurns(lock[i],lock0[i])
print(turns)


