
names = ["Danil", "Olya", "Slava", "Ann", "Nikita"]
words = []
i = 0
tentWord = ""
for char in input():
    if char.isupper() or char == '_':
        words.append(tentWord)
        tentWord = ""
    if char != '_':
        tentWord += char
words.append(tentWord)
numNames = 0
for word in words:
    if word in names:
        numNames += 1
if numNames == 1:
    print("YES")
else:
    print("NO")

