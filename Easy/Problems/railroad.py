xCrossings, ySwitches = [int(num) for num in input().split()]
if ((xCrossings * 4) + (ySwitches * 3)) % 2 == 0:
    print('possible')
else:
    print('impossible')