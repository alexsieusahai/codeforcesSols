mySum = 0
for num in [int(x) for x in input().split()]:
    mySum += num
if mySum%5 ==0 and mySum != 0:
    print (mySum//5)
else:
    print('-1')
