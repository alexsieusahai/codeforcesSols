
def genDict(upBnd,primeDict,n):
    # fill the dict with upBnd and n range, assume all prime
    checkList = []
    for i in range(upBnd+1,n+1):
        primeDict[i] = True
        checkList.append(i)
    # sieve out using the primes in primeDict
    for num in primeDict:
        if num > upBnd:
            continue
        if primeDict[num]:
            # set a to be one below lower bound
            i = upBnd//num
            a = i*num
            while a <= n:
                if primeDict[a] and a < upBnd:
                    a += num
                    continue
                primeDict[a] = False
                a += num
    for num in checkList:
        if primeDict[num] == False:
            checkList.remove(num)
    return [primeDict,n,checkList]
    
def getTrunc(n):
    truncList = []
    a = n
    n = list(str(n))
    a = list(str(a))
    if len(n) == 1:
        return [1]
    while len(n) > 0:
        truncList.append(int(''.join(n)))
        n.remove(n[0])
    while len(a) > 0:
        truncList.append(int(''.join(a)))
        a.pop()
    return truncList
    


truncPrimes = []
n = 0
upBnd = 3
primeDict = {1:False,2:True,3:True,0:False}
while len(truncPrimes) <= 11:
    n += 100
    [primeDict,upBnd,checkList] = genDict(upBnd,primeDict,n)
    for num in checkList:
        winner = True
        for i in getTrunc(num):
            if primeDict[i] == False:
                winner = False
        if winner == True:
            truncPrimes.append(num)
            print(truncPrimes)
print(sum(truncPrimes))
