qualityDict = {}
for nums in range(int(input())):
    [a,b] = [int(x) for x in input().split()]
    if a not in qualityDict or qualityDict[a] < b:
        qualityDict[a] = b;
qualityList = sorted(qualityDict,reverse=True)
print(qualityDict)
for num in qualityList:
