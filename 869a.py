numDict = {}
bigList = []
n = int(input())
for a in range(2):
    rawList = [int(x) for x in input().split()]
    for num in rawList:
        numDict[num] = True
        bigList.append(num)

numSatisfied = 0

for i in bigList:
    for j in bigList:

print(numSatisfied)
if numSatisfied % 2 == 0:
    print("Karen")
else:
    print("Koyomi")
