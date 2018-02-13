w = {}
top = int(input())
extra = 0
firstGuess = ''
for t in range(top):
    [c,word] = input().split()
    if firstGuess == '':
        firstGuess = word
        continue
    if c == '!':
        extra += 1
    if c == '.':
        i = 0
        for c in word:
            if c not in firstGuess:
                i += 1
        if i == len(word):
            extra += 1
    if c == '?':
        if word not in firstGuess:
            extra += 1
    if len(w.keys()) == 1:
        break
print(extra)
