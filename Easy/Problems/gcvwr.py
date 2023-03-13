[totLegalWeight, weightTruck, amountItemsCamping] = map(int, input().split())
itemsWeight = sum(list(map(int, input().split())))

towCapacity = totLegalWeight - weightTruck
print(int(0.9 * towCapacity) - itemsWeight)
