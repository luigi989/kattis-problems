base, height = input().split()
base, height = [int(base), int(height)]
if 0 <= base <= 1000 and 0 <= height <= 1000:
    area = (base * height) / 2
    if area.is_integer():
        print(int(area))
    else:
        print(area)