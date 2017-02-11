import cs50

def posNeg(x):
    if x > 0:
        print("Positive!")
    elif x < 0:
        print("Negative!")
    else:
        print("Zero!")
        
def evenOdd(x):
    if x % 2 == 0:
        print("Even!")
    else:
        print("Odd!")

def main():
    print("Enter an integer: ", end="")
    userNum = cs50.get_int()
    
    posNeg(userNum)
    evenOdd(userNum)

if __name__ == "__main__":
    main()