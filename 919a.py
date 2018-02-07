# maybe better built in accuracy than cpp
[n,m] = [int(x) for x in input().split()]
smallNum = -1
for i in range(n):
    [t,v] = [int(x) for x in input().split()]
    if smallNum == -1:
        smallNum = m*(t/v)
    else:
        smallNum = min(smallNum, m*(t/v))
print(smallNum)
