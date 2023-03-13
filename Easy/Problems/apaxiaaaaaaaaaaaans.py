word = list(input())
length = len(word)

i = 0
while i < length:
    if not i == length - 1:
        if word[i] == word[i+1]:
            word.pop(i)
            length -= 1
        else:
            i += 1
    else:
        i += 1
print(''.join(word))
