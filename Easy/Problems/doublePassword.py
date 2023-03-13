pw1 = input()
pw2 = input()

combinations = 0
combinations += 1 if abs(int(pw1) - int(pw2)) < 2 else 2
for i in range(len(pw1)):
    combinations += abs(int(pw1[i]) - int(pw2[i]))
print(combinations)