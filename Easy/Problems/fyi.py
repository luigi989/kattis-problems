phoneNum = input()
if 1000000 <= int(phoneNum) <= 9999999:
    prefix = int(phoneNum[:3])
    if prefix == 555:
        print(1)
    else:
        print(0)