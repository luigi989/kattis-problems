time = input()
digits = [int(d) for d in time]

binaryNumbers = list()
for i in range(len(digits)):
    binaryNumbers.append(str("{0:b}".format(digits[i]).zfill(4)))

rotated = list(zip(*binaryNumbers[::-1]))
for i in range(len(rotated)):
    rotated[i] = rotated[i][::-1]
    for j in range(len(rotated[i])):
        if(j == 2):
            print('', end='  ')
        if int(rotated[i][j]) == 1:
            print('*', end=' ') if j < len(rotated[i]) -1 else print('*')
        else:
            print('.', end=' ') if j < len(rotated[i]) -1 else print('.')
