allMoves = input()
moves = [move for move in allMoves]

ballPos = 0

for move in moves:
    if move == 'A':
        if ballPos == 0:
            ballPos = 1
        elif ballPos == 1: 
            ballPos = 0
    elif move == 'B':
        if ballPos == 1:
            ballPos = 2
        elif ballPos == 2: 
            ballPos = 1
    elif move == 'C':
        if ballPos == 0:
            ballPos = 2
        elif ballPos == 2: 
            ballPos = 0
print(ballPos + 1)
    
