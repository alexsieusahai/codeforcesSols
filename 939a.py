def ans():
    d = {}
    n = int(input())
    l = [int(x) for x in input().split()]
    for i in range(n):
        d[i+1] = l[i]
    for i in d:
        if i == d[d[d[i]]]:
            print('YES')
            return
    print('NO')
    return

ans()

