signs = input()
length = len(signs)
for i in range(length):
    if i+1 < length and (signs[i] == ':' or signs[i] == ';'):
        if signs[i+1] == ')':
            print(i)
            i += 2
        elif i+2 < length and (signs[i+1] == '-' and signs[i+2] == ')'):
            print(i)
            i += 3
