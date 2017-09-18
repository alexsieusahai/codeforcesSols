import copy

n = int(input())
numDict = {}
for num in [int(x) in input().split()]:
    if num not in numDict:
        numDict[num] = 1
    else:
        numDict[num] =+ 1

def recSol(numDict, score):
    if len(numDict == 0):
        return score
    for num in numDict:
        score += num
        numDict[num] -= 1
        if num+1 in numDict:
            numDict[num+1] = 0
        if num-1 in numDict:
            numDict[num-1] = 0
        recSol(numDict,score)




buildScore(numList,score,scoreList)
print(scoreList)
