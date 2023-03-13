import math
cases = int(input())
numbers = [None] * cases

for i in range(cases):
    num = int(input())
    powNum = num % 10
    num = int(num / 10)
    numbers[i] = int(math.pow(num, powNum))
print(sum(numbers))