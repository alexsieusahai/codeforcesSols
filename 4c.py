names = []
for i in range(int(input())):
    name = list(input())
    originallyIn = False
    a = 1
    if inList(''.join(name),names):
        originallyIn = True
        name.append(a)
        while inList(str(name),names):
            a += 1
            name[-1] = a
    names.append(''.join(name))
    if originallyIn:
        print(''.join(name))
    else:
        print(name)

def inList(name,names):


