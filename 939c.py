input()
a = [int(x) for x in input().split()]
[f,s] = [int(x) for x in input().split()]
u,v = f,s
bigNum = 1
while f > 1:
    f -= 1
    s -= 1
    if f < 1: f = n
    if s < 1: s = n
    a.append(a.pop(0))
c = 0
i = 0
# get all the first terms
while s > 1:
