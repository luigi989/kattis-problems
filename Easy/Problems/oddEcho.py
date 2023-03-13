wordCount = int(input())
words = [input() for i in range(wordCount)]
for i in range(wordCount):
    if i % 2 == 0:
        print(words[i])
