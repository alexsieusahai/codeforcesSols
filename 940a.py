def diameter(x,d,ans):
    diff = x[-1]-x[0]
    if diff <= d:
        return ans
    else:
        return min(diameter(x[1:],d,ans+1),diameter(x[:-1],d,ans+1))
    

[n,d] = [int(x) for x in input().split()]
x = [int(x) for x in input().split()]
x = sorted(x)
ans = 0
print(diameter(x,d,ans))
