
amountofMoves = 0

def determineMoves(moves, outer1, middle, outer2): 
    if (middle + outer2) / 2 % 0:   
        temp = middle
        middle = (middle + outer2) / 2
        outer1 = temp
        moves += 1
        determineMoves(moves, outer1, middle, outer2)
    elif(middle + outer1) / 2 % 0:
        temp = middle
        middle = (middle + outer1) / 2
        outer2 = temp
        moves += 1
        determineMoves(moves, outer1, middle, outer2)
    else:
        print(moves)

outer1, middle, outer2 = [int(num) for num in input().split()]
print(determineMoves(amountofMoves, outer1, middle, outer2))
