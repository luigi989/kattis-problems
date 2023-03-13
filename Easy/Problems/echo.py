import re

word = input().strip()
if bool(re.search(r'^[A-Za-z]+$', word)) and len(word) >= 1 and len(word) <= 15:
    print (word, word, word)

    