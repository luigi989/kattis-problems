from re import I


blocks = int(input())
height = 0
amountOfNeededBlocks = 0

i = 1
while amountOfNeededBlocks <= blocks:
    currentFloor = i * i
    amountOfNeededBlocks += currentFloor
    height += 1
    i += 2
print(height - 1)