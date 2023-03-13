cprNumber = input()
cprNumber = cprNumber.replace('-', '')
cprNumber = [int(i) for i in str(cprNumber)]
values =  [4, 3, 2, 7, 6, 5, 4, 3, 2, 1]

sum = 0
for i in range(len(cprNumber)):
    sum += cprNumber[i] * values[i]
print(1) if sum % 11 == 0 else print(0)
    
