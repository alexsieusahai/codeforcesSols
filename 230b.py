import math
def isPrime(testNum):
    if testNum == 1:
        return False
    if testNum == 2:
        return True
    # check to make sure it's an integer value
    if abs(testNum-int(testNum)) > 0.00001:
        return False
    if (testNum % 2 == 0):
        return False
    i = 3
    while i <= math.sqrt(testNum):
        if (testNum % i == 0):
            return False 
        i += 2
    return True 

numTests = input()
inputList = [int(x) for x in input().split()]

for testNum in inputList:
    if isPrime(math.sqrt(testNum)):
        print("YES")
    else:
        print("NO")

