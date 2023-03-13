islands, amountBridges = map(int, input().split())
bridges = list()

for i in range(amountBridges):
    island1, island2 = map(int, input().split())
    bridges.append((island1, island2))
print(bridges)