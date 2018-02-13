# brute force
x = int(input())
[h,m] = [int(x) for x in input().split()]
lowTime = [h,m]
highTime = lowTime[:]
lowNum = 0
highNum = 0
while '7' not in str(highTime[0]) and '7' not in str(highTime[1]) and '7' not in str(lowTime[0]) and '7' not in str(lowTime[1]):
    lowTime[1] -= x
    if lowTime[1] < 0:
        lowTime[1] += 60
        lowTime[0] -= 1
    if lowTime[0] < 0:
        lowTime[0] = 23
    lowNum += 1
print(lowNum)
