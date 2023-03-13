from dis import dis
import math
from ntpath import join

cases = int(input())

g = 9.81
outcomes = [None] * cases

for i in range(cases):
    vars = [float(x) for x in input().split()]
    velocity, theta, distanceToWall, bottomHeight, topheight = vars 
    theta = math.radians(theta)
    time = distanceToWall / (math.cos(theta) * velocity)
    currentHeight = (velocity * time * math.sin(theta)) - ((g * time * time) / 2)
    if bottomHeight + 1 <= currentHeight <= topheight - 1:
        outcomes[i] = 'Safe'
    else:
        outcomes[i] = 'Not Safe'
print('\n'.join(outcomes))