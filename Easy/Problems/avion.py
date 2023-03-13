blimps = list()
foundBlimps = list()
for i in range(5):
    blimps.append(input())

for i in range(5):
    if 'FBI' in blimps[i]:
        foundBlimps.append(i + 1)
if len(foundBlimps) > 0:
    print(*foundBlimps, sep=" ")
else:
    print('HE GOT AWAY!')
