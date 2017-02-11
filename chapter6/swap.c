#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter first integer: ");
    int num1 = GetInt();
    printf("Enter second integer: ");
    int num2 = GetInt();
    
    // this is boilerplate swapping code
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    // print swapped values
    printf("First integer: %d\nSecond integer: %d\n", num1, num2);
}