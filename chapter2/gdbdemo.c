#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter an integer: ");
    
    int num = GetInt();
    
    // printf("BEFORE SQUARING: %d.\n", num);
    num *= num;
    // printf("AFTER SQUARING: %d.\n", num);
    
    printf("Your number squared is %d.\n", num);
}