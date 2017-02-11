import cs50

def fact(x):
    if x == 0:
        return 1
    else:
        return x * fact(x-1)
        
def main():
    print("Please enter a number: ", end="")
    num = cs50.get_int()
    
    ans = fact(num)
    print(ans)

if __name__ == "__main__":
    main()