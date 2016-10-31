/*
*
* Program to swap two values
* Peter Strawn
* CS50 AP
*
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter first integer: ");
    int num1 = GetInt();
    printf("Enter second integer: ");
    int num2 = GetInt();
    
    /* bad! -> what is the problem here? */
    num2 = num1;
    num1 = num2;
    
    // print unswapped values
    printf("First integer: %d\nSecond integer: %d\n", num1, num2);
    
    printf("Enter first integer (again): ");
    num1 = GetInt();
    printf("Enter second integer (again): ");
    num2 = GetInt();
    
    /* good! -> this is boilerplate swapping code */
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    // print swapped values
    printf("First integer: %d\nSecond integer: %d\n", num1, num2);
}