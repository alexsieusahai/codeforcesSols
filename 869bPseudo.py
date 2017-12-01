# bc strings are a bitch in cpp

[a,b] = [int(x) for x in input().split()]
if a == 0:
    a = 1
if b == 0:
    b = 1
# want to compute b!/a!
diff = b-a
bigNum = 1
while diff > 0:
    bigNum = (bigNum*b)%10
    b -= 1
    diff -= 1
    bigNum = int(str(bigNum)[-1])
    if (bigNum == 0):
        break

print(bigNum)
