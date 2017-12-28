numDict = {0:True,1:True,2:True,3:True,4:True,5:True,6:True,7:True,8:True,9:True}

def isNum(char):
    if int(char) in numDict:
        return True
    return False


def transform(arg): # let arg be a string
    argList = list(arg)
    if argList[0] == 'R' and isNum(argList[0]):
        return RC2numlet(argList)
    else:
        return numlet2RC(argList)


#for test in range(int(input())):

