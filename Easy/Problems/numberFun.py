cases = int(input())
outcomes = [None] * cases

for i in range(cases):
    num1, num2, outcome = [int(num) for num in input().split()]
    if num1 + num2 == outcome or num1 - num2 == outcome or num2 - num1 == outcome or num1 * num2 == outcome or num1 / num2 == outcome or num2 / num1 == outcome:
        print('Possible')
    else:
        print('Impossible')