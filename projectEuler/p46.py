# try the brute force solution

def flexSieve(n,primeDict,primeList,bigPrime):
    newNums = []
    for i in range(2,bigPrime+1):
        if primeDict[i]:
            newNums.append(i)
    for i in range(bigPrime+1,n+1):
        primeDict[i] = True
        newNums.append(i)
    for prime in newNums:
        if primeDict[prime]:
            a = prime
            if a not in primeList:
                primeList.append(a)
            while a+prime <= n:
                a += prime
                primeDict[a] = False
    return [primeDict,bigPrime,primeList]

foundNum = 0
i = 8
bigPrime = 7
primeList = [2]
primeDict = {2:True,3:True,4:False,5:True,6:False,7:True,8:False}
iSquaredList = [2,8]
b = 3
while (foundNum == 0):
    checkNums = []
    j = i
    i += 4*b - 2
    print(i)
    b += 1
    iSquaredList.append(i)
    [primeDict,bigPrime,primeList] = flexSieve(i,primeDict,primeList,bigPrime)
    for a in range(j+1,i,2):
        if not primeDict[a]:
            checkNums.append(a)
    for num in checkNums:
        solution = False
        for prime in primeList:
            if num-prime in iSquaredList:
                solution = True
                break
        if solution == False:
            foundNum = num
            break
print(foundNum)


