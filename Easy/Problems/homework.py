unfiltered = input()
filtered = unfiltered.split(';')
for i in range(len(filtered)):
    if '-' in filtered[i]:
        num = filtered[i]
        first = slice(num.index('-'))
        last = slice(num.index('-') + 1, len(num))
        num1 = int(num[first])
        num2 = int(num[last])
        totNum = num2 - num1 + 1
        filtered[i] = totNum
    else:
        filtered[i] = 1

filteredInt = [int(num) for num in filtered]
print(sum(filteredInt))