a = input()
b = input()
numDict = {}
for i in a:
    if int(i) not in numDict:
        numDict[i] = 1
    else:
        numDict[i] += 1
a = ""
print(numDict)
for i in b:
    a += '0'
    # now they are the same length
for i in range(len(b)-1,-1, -1):
    for j in range(9,0,-1):
        j = str(j)
        if j in numDict:
            print("found one in numDict")
            if numDict[j] > 0:
                checkNum = a[:i]+j+a[(i+1):]
                print(checkNum)
                if int(j) <= int(b):
                    numDict[j] -= 1
                    if numDict[j] == 0:
                        numDict.pop(j,None)
                    a = checkNum
                    break
print(a)

