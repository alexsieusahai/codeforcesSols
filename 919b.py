k = int(input()) - 1
perfect = [1,9]
while k > 0:
    i = len(perfect)-1
    perfect[i] -= 1
    perfect[i-1] += 1

    if perfect[i] == 0:
        while perfect[i-1] == 10:
            perfect[0] = 0
            perfect.insert(0,1)
            perfect[i] = 9
        continue

    k -= 1
print(perfect)

