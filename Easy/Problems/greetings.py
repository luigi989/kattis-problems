greeting = input()
if 1 <= len(greeting) <= 1000 :
    count = greeting.count('e')
    print('h' + ('e' * count * 2) + 'y')