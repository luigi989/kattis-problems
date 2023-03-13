amount = int(input())
numbers = list()
for i in range(0, amount):
    num = int(input())
    numbers.append(num)

numbers.reverse()
for num in numbers:
    print(num)