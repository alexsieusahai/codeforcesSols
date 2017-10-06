# easy!
import sys
n = int(input())

charList = []
charDict = {}
foundSeats = False
for row in range(n):
    seatOpen = False
    for char in [str(x) for x in input()]:
        if char == 'O':
            if seatOpen == True and foundSeats == False:
                charList.pop()
                char = '+'
                charList.append('+')
                foundSeats = True
            seatOpen = True
        else:
            seatOpen = False
        charList.append(char)
    charDict[row] = charList
    charList = []
if foundSeats:
    print("YES")
    for i in range(n):
        for char in charDict[i]:
            # have to make python print on same line
            sys.stdout.write(char)
        print()
else:
    print("NO")
