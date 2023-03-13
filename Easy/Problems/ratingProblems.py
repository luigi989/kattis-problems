amountJudges, judgesAlreadyReated = [int(num) for num in input().split()]
totRating = 0
for i in range(0, judgesAlreadyReated):
    rating = int(input())
    totRating = totRating + rating

minRating = ((amountJudges - judgesAlreadyReated) * -3 + totRating) / amountJudges
maxRating = ((amountJudges - judgesAlreadyReated) * 3 + totRating) / amountJudges
print(minRating, maxRating)