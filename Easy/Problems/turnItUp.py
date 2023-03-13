volume = 7

times = int(input())
for i in range(times):
    command = input()
    if command == 'Skru op!':
        if not volume == 10:
            volume += 1
    else:
        if not volume == 0:
            volume -= 1
print(volume)