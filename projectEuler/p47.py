
# build sieve

def sieve(n):
    # returns prime number list below and including n
    primeDict = {}
    primeList = []
    for i in range(2, n+1):
        primeDict[i] = True
    for i in range(2,n+1):
        if primeDict[i]:
            a = i
            primeList.append(i)
            while i+a <= n:
                i += a
                primeDict[i] = False
    return primeList

def genFactorList(i, primeList):
    factorList = []
    for potFactor in primeList:
        while i%potFactor == 0:
            i /= potFactor
            if potFactor not in factorList:
                factorList.append(potFactor)
            if i == 1:
                return factorList
    return factorList

primeList = sieve(10**6)
a = 0
for i in range(2,10**6):
    print(i)
    if len(genFactorList(i, primeList)) == 4:
        a += 1
    else:
        a = 0
    if a == 4:
        print(i-3)
        break
