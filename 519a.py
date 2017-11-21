valueDict = {'Q':9, 'q':-9, 'R':5, 'r':-5, 'B':3, 'b':-3, 'N':3,'n':-3, 'P' : 1, 'p' : -1, '.':0, 'K':0,'k':0}

points = 0
for row in range(8):
    for char in input():
        points += valueDict[char]
if points < 0:
    print("Black")
elif points > 0:
    print("White")
else:
    print("Draw")

