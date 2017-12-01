# lets see if we can find a trivial pattern

# 1378 = 2*53*13

# we know it's going to be even only since we have the two

# we can just examine what happens at the last digit actually

# 1378 = 1000+300+70+8
# if we are concerned with only the last digit, 1378^n % 10 will be just concerned with the 8^n term

i = int(input())
n = 1
while i > 0:
    i -= 1
    n *= 8
    n = n%10
print(n)
