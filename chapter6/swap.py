import cs50
# could also import only get_int or all functions
# then I could write get_int(), not cs50.get_int()
# from cs50 import get_int
# from cs50 import *

# method one: CS50 library
print("Enter first integer: ", end="")
num1 = cs50.get_int()
print("Enter second integer: ", end="")
num2 = cs50.get_int()

# method two: Python input
# num1 = int(input("Enter first integer: "))
# num2 = int(input("Enter second integer: "))

num1, num2 = num2, num1

print("First integer: {}\nSecond integer: {}".format(num1, num2))