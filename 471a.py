inputList = [int(x) for x in input().split()]
numDict = {}
numList = []
for num in inputList: 
    if num not in numDict:
        numDict[num] = 1
    else:
        numDict[num] += 1
