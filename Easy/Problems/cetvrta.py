from collections import Counter
x1, y1 = [int(num) for num in input().split()]
x2, y2 = [int(num) for num in input().split()]
x3, y3 = [int(num) for num in input().split()]

xCords = []
yCords = []

xCords.extend([x1, x2, x3])
yCords.extend([y1, y2, y3])
x4 = [k for k,v in Counter(xCords).items() if v == 1]
y4 = [k for k,v in Counter(yCords).items() if v == 1]
print(*x4, *y4, sep=' ')