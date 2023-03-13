letters = input()
li = list(letters)
if len(li) != len(set(li)):
    print(0)
else:
    print(1) 