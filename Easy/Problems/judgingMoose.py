num1, num2 = [int(num) for num in input().split()]
if num1 == 0 and num2 == 0:
    print("Not a moose")
elif 20 >= num1 > 0 or 20 >= num2 > 0:
    if num1 == num2:
        print("Even", 2 * num1)
    else:
        print("Odd", 2 * num1) if num1 > num2 else print("Odd", 2 * num2) 