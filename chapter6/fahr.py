# version 1: using CS50 (catches non-float input)
import cs50

print("C: ", end="")
temp = cs50.get_float()
print("F: {0:0.1f}".format(temp * 9 / 5 + 32))

# version 2: using Python's input methods (without validating input)
temp = float(input("C: "))
print("F: {0:0.1f}".format(temp * 9 / 5 + 32))

# version 3: using Python's input methods (and validating input)
temp = input("C: ")
while True:
    try:
        temp = float(temp)
        break
    except:
        temp = input("Retry: ")
        continue
print("F: {0:0.1f}".format(temp * 9 / 5 + 32))