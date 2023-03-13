letters = input()

player = 7
tabletCount = letters.count('T')
compassCount = letters.count('C')
gearCount = letters.count('G')

l = (tabletCount, compassCount, gearCount)

print((tabletCount * tabletCount) + (compassCount * compassCount) + (gearCount * gearCount) + (min(l) * player))