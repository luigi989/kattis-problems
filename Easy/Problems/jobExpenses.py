amountOfNumbers = int(input())
allNumbers = [int(num) for num in input().split()]
sum = 0
for num in allNumbers:
    if num < 0:
        sum += num
print(abs(sum))
    