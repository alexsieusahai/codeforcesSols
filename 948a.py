def ans():
    [r,c] = [int(x) for x in input().split()]
    boardDict = {}
    for j in range(r):
        i = 0
        for x in input():
            boardDict[i,j] = x
            i += 1
    for j in range(r):
        for i in range(c):
            if boardDict[(i,j)] == 'W':
                if (i-1,j) in boardDict:
                    if boardDict[(i-1,j)] == 'S':
                        print('No')
                        return
                if (i+1,j) in boardDict:
                    if boardDict[(i+1,j)] == 'S':
                        print('No')
                        return
                if (i,j-1) in boardDict:
                    if boardDict[(i,j-1)] == 'S':
                        print('No')
                        return
                if (i,j+1) in boardDict:
                    if boardDict[(i,j+1)] == 'S':
                        print('No')
                        return

            if boardDict[(i,j)] == '.':
                boardDict[(i,j)] = 'D'
    print('Yes')
    for j in range(r):
        for i in range(c):
            print(boardDict[(i,j)],end='')
        print()

ans()
