cases = int(input())
outcomes = [0] * cases

for i in range(cases):
    turtles = [int(num) for num in input().split()]
    j = 0
    while not turtles[j] == 0:
        if turtles[j+1] - 2*turtles[j] > 0:
            outcomes[i] += turtles[j+1] - 2*turtles[j]
        j += 1
for num in outcomes:
    print(num)