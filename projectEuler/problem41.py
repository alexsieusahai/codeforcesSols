# most feasible for build all pandigital then test via brute force

def bfPrimality(n):
    i = 0
    while i <= int(math.sqrt(n)):
        i += 1
        if n%i == 0:
            return True

def buildPanComb(numList,nstr,bigList):
    # take from numList and use to build nstr
    # once numList is empty append the thing to bigList
    # have to build algorithm on paper first then pseudo then python
