[n,a,b,c] = [int(x) for x in input().split()]
# take brute force approach
global numCombs = 0
cutOptions = [a,b,c]
def cut(n,cutOptions,numCombs):
    if n == 0:
        return 1
    if n < 0:
        return 0
    if n > 0:
        for length in cutOptions:
            print(length)
            print(n-length)
            print()
            numCombs += cut(n-length,cutOptions,numCombs)
        return 0
cut(n,cutOptions,numCombs)
print(numCombs)
