table = list([['A', 11, 11], ['K', 4, 4], ['Q', 3, 3], ['J', 20, 2], ['T', 10, 10], ['9', 14, 0], ['8', 0, 0], ['7', 0, 0]])

def getDominant(card, suit):
    for row in table:
        if(row[0]) == card:
            if suit == dominantSuit:
                return row[1]
            else:
                return row[2]

hands, dominantSuit = input().split()
hands = int(hands)
cards = list()
sum = 0
for i in range(hands * 4):
        cards.append(input())
        sum += getDominant(cards[i][0], cards[i][1]) 
print(sum)
