sentence = input()
words = sentence.split(' ')
print("yes") if len(words) == len(set(words)) else print("no")