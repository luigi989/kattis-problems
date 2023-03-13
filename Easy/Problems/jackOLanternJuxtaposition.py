eyes, noses, mouths = input().split()
eyes, noses, mouths = [int(eyes), int(noses), int(mouths)]
if 1 <= eyes <= 500 and 1 <= noses <= 500 and 1 <= mouths <= 500:
    print(eyes * noses * mouths)