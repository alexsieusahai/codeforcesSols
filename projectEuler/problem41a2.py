# build a sieve and run 10**10
# check each prime for pandigital
# store and report largest

def soa(n):
    primeList = []
    numDict = {}
    for i in range(2,n):
        numDict[i] = True
    for i in range(2,n):
        print(i)
        if numDict[i]:
            a = i
            primeList.append(i)
            while i-a <= n:
                i += a
                numDict[i] = False
    return primeList
print(soa(10**10))

def nat(n):
    mySum = 0
    for i in range(1,n+1):
        mySum += i
    return mySum

def isPanDig(n):
    nList = list(str(n))
    a = len(nList)
    for i in range(a):
        nList[i] = int(nList[i])
    if sum(nList) != nat(a):
        return False
    # now that we did prelim check, do the rough check
    checkList = []
    for num in range(1,a+1):
        checkList.append(num)
    for num in nList:
        if num not in nList:
            return False
    return True

#bigNum = 0
#for prime in soa(10**10):
#    if isPanDig(prime):
#        if prime > bigNum:
#            bigNum = prime
#print(bigNum)

