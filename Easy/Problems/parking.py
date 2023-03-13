cases = int(input())

for i in range(cases): 
    storesVisited = int(input())
    distances= [int(num) for num in input().split()]

    parkSpot = ((max(distances) + min(distances)) / 2)
    LongestDistanceToStore = parkSpot - min(distances)
    totMinDistanceWalk = LongestDistanceToStore * 4
    print(int(totMinDistanceWalk))