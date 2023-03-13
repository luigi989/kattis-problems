cases = int(input())
magnitudes = [None] * cases
for i in range(cases):
    cost = input()
    magnitudes[i] = str(len(cost))
print("\n".join(magnitudes))