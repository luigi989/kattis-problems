import math
num1, num2, num3, num4 = [int(num) for num in input().split()]
semi = (num1 + num2 + num3 + num4) / 2
temp = (semi - num1) * (semi - num2) * (semi - num3) * (semi - num4) 
maxArea = math.sqrt(temp)
print(maxArea)