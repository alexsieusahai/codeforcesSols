# lets try naive solution
def genAns(numList):
    const = '0.'
    count = 0
    i = 0
    ansProd = 1
    while count <= numList[-1]:
        i += 1
        for numStr in str(i):
            count += 1
            const += numStr
            if count in numList:
                print(numStr)
                ansProd *= int(numStr)
    print(const)
    return(ansProd)

numList = []
for i in range(7):
    numList.append(10**i)
print(genAns(numList))


