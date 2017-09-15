[k,r] = [int(x) for x in input().split()]
mySum = k
if k == 0:
    i = 0
else:
    i = 1
change = mySum%10
while change != r and change != 0:
    mySum += k
    i += 1
    change = mySum%10
print(i)
