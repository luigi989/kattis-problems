num = int(input())
num = bin(num).replace('0b', '')
num = int(str(num)[::-1], 2)

print(num)