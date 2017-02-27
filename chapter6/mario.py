import cs50

while True:
    print("Height: ", end="")
    height = cs50.get_int()
    if 0 <= height <= 23:
        break
    
for i in range(height):
    for j in range(1,height-i):
        print(" ", end="")
    for j in range(i+2):
        print("#", end="")
    print()