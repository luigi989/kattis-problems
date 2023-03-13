eyeSauron = input()
sides = eyeSauron.split("()")
if sides[0] == sides[1]:
    print("correct")
else:
    print("fix")