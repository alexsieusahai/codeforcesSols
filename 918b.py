[n,m] = [int(x) for x in input().split()]
nd = {}
for i in range(n):
    a = input().split()
    nd[a[1]] = a[0]
for i in range(m):
    a = input().split()
    print(' '.join(a)+' #'+nd[''.join(list(a[1])[:-1])])

