n = input()
recruits = 0
untreated = 0
for event in [int(x) for x in input().split()]:
    if event == -1:
        if recruits == 0:
            untreated += 1
        else:
            recruits -= 1
    else:
        if event > 10:
            recruits += 10
        else:
            recruits += event

print(untreated)

