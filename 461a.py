# greedy approach
n = int(input())
a = [int(x) for x in input().split()]
mySum = sum(a)
a = list(sorted(a))
#while len(a) > 1:
#    mySum += sum(a)
#    a = a[1:]
#    #print(a)
for i in range(n):
    mySum += (i+1)*a[i]
mySum -= a[n-1]
print(mySum)

