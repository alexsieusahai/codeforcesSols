import sys
input()
ns = [int(x) for x in input().split()]
mv = input()
l = {}
low,high = -1,-1 # is there more pythonic way
for i in range(len(ns)):
    i = int(i)
    if mv[i] == '1':
       low = i
       while mv[i] == '1':
            l[ns[i]] = True
            i += 1
       print('high is ',i)
       print('low is ',low)
       for k in l.keys():
           k = int(k)-1
           if k < low or k > i:
               print('failed on this k ',k)
               print('NO')
               sys.exit()

    if mv[i] == '0':
        print('failed on ',i)
        print('ns[i] is ',ns[i])
        print('NO')
        sys.exit()

print('YES')
