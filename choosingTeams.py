
[n,k] = [int(x) for x in input().split()]
playerList = [int(x) for x in input().split()]
i = 0
for i in range(n):
# first I have to determine the amount of years left
    playerList[i] -= 5
    playerList[i] += k
eligible = 0
for player in playerList:
    if player <= 0:
        eligible += 1
print(eligible//3)
