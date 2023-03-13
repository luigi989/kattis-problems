from re import S


s = input()
totCountSmallLetters = s.count('a') + s.count('e') + s.count('i') + s.count('o') + s.count('u')
totCountBigLetter = s.count('A') + s.count('E') + s.count('I') + s.count('O') + s.count('U')
print(totCountSmallLetters + totCountBigLetter)