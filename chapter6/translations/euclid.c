#include <cs50.h>
#include <stdio.h>

int getGCD(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return getGCD(n, m % n);
    }
}

int main(void)
{
    printf("Enter integer one: ");
    int num1 = GetInt();
    
    printf("Enter integer two: ");
    int num2 = GetInt();
    
    int gcd = getGCD(num1, num2);
    
    printf("The GCD of %d and %d is %d.\n", num1, num2, gcd);
}