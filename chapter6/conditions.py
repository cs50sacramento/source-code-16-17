import cs50

# method one: CS50 library
print("Enter a valid grade: ", end="")
percent = cs50.get_int()

# method two: Python input
# percent = input("Enter a valid grade: ")
# input is always a string; need this line to convert to int
# percent = int(percent)

if percent >= 90:
    print("You got an A!")
elif percent >= 80:
    print("You got a B!")
elif percent >= 70:
    print("You got a C!")
elif percent >= 0:
    print("You got a D!")
else:
    print("You somehow got a negative grade. Sad.")