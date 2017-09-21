
def buttonPressIter(n,numSolved):
    timesPushed = 0
    while n > 0:
        timesPushed += n+numSolved*(n-1)
        numSolved += 1
        n -= 1
    return timesPushed

print(buttonPressIter(int(input()),0))
