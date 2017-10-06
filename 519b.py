
errorDict = {}
solved = 0
n = input()
for error in [str(x) for x in input().split()]:
    errorDict[error] = True
for i in range(2):
    newDict = {}
    for error in [int(x) for x in input().split()]:
        errorDict[error] = False

for error in errorDict:
    if errorDict:
