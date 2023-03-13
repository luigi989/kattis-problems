sentence = input()
lastLetters = sentence[-3:]
if "eh?" in lastLetters:
    print("Canadian!")
else:
    print("Imposter!")