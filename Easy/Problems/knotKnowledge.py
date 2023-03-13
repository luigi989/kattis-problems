amountKnotsNeeded = int(input())
knotsNeeded = [int(num) for num in input().split()]
knotsKnown = [int(num) for num in input().split()]
print(list(set(knotsNeeded) - set(knotsKnown))[0])
