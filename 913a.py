import math

# m mod 2**n means m = q(2**n)+k, return k

n = int(input())
m = int(input())
if n > 32:
    n = 32

print(m % (2**n))
