num1, num2 = input().split()
num1, num2 = [int(num1), int(num2)]
if 0 <= num1 <= 1000 and 0 <= num2 <= 1000:
    print(num1 + num2)