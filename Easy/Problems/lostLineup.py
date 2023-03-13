amountPersons = int(input())
queueOrder = [None] * amountPersons
queueOrder[0] = 1

persons = [int(num) for num in input().split()]

for i in range(len(persons)):
    