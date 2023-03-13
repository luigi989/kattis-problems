testCases = int(input())
results = list()

for i in range(testCases):
    amountOfPlaces = int(input())
    places = list()
    for j in range(amountOfPlaces):
        place = input()
        if place not in places:
            places.append(place)
    results.append(str(len(places)))
print("\n".join(results))