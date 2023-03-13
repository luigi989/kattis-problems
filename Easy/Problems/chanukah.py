useCases = int(input())
w, h = 2, useCases
Matrix = [[0 for x in range(w)] for y in range(h)]

def candlesNeeded(days):
    candles = 0
    for i in range(1, days + 1):
        candles += i + 1
    return candles 

for i in range(len(Matrix)):
    case, days = input().split()
    Matrix[i][0] = int(case)
    Matrix[i][1] = candlesNeeded(int(days))
for i in range(len(Matrix)):
    print(Matrix[i][0], Matrix[i][1])