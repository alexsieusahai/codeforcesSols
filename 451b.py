n = int(input())
a = [int(x) for x in input().split()]
l = -1
r = -1
for i in range(n-1):
    if a[i] > a[i+1]:
        l = i
        #print("l is "+str(l))
        for j in range(i,n):
            if j == n-1:
                r = j
                #print("r is "+str(r))
                break
            if a[j] < a[j+1]:
                r = j
                #print("r is "+str(r))
                break
        break
shouldContinue = True
if l == -1 and r == -1:
    print("yes")
    print("1 1")
    shouldContinue = False

a = a[:l]+list(reversed(a[l:r+1]))+a[r+1:]
#print("a is "+str(a))

if shouldContinue:
    correct = True
    for i in range(n-1):
        if a[i] > a[i+1]:
            correct = False
    if correct:
        print("yes")
        print(str(l+1)+' '+str(r+1))
    else:
        print("no")

