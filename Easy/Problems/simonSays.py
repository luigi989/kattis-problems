cases = int(input())
lines = list()
targetWords = 'Simon says '

for i in range(cases):
    line = input()
    if targetWords in line:
        lines.append(line.split(targetWords, 1)[1])
print("\n".join(lines))
