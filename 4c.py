# use dictionary as hashing table

nameDict = {}
for i in range(int(input())):
    name = input()
    printName = False
    if name in nameDict:
        printName = True
        nameDict[name] += 1
    else:
        nameDict[name] = 0
    if printName:
        print(name+str(nameDict[name]))
    else:
        print('OK')



