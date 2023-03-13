lowThrhold = int(input())
highThrhold = int(input())
totSum = int(input())

foundNums = list()

for i in range(lowThrhold, highThrhold + 1):
    digits = [int(d) for d in str(i)]
    sumDigits = sum(digits)
    if sum(digits) == totSum:
        foundNums.append(i)

print(foundNums[0])
print(foundNums[len(foundNums) - 1])