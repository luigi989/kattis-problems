from dis import dis


distances = []
times = []
maxSpeed = 0
cases = int(input())

for i in range(cases):
    time, distance = [int(num) for num in input().split()]
    distances.append(distance)
    times.append(time)

i = 1
while i < cases:
    distance = distances[i] - distances[i - 1]
    time = times[i] - times[i - 1]
    speed = distance / time
    if(speed > maxSpeed):
        maxSpeed = speed
    i += 1
print(int(maxSpeed))
