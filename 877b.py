
myInput = input()
while (myInput[0] == 'b'):
    myInput = myInput[1:]
if (myInput[-1] == 'a'):
    while (myInput[-1] == 'b'):
        myInput = myInput[:len(myInput)-1]
i = 0
lenList = []
oldChar = myInput[0]
myInput = myInput[1:]
for char in myInput:
    if char = oldChar:
        lenList[i] += 1
    else:
        i += 1
    oldChar = char
