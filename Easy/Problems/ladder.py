import math
h, v = [int(num) for num in input().split()]
print(math.ceil(h / math.sin(math.radians(v))))