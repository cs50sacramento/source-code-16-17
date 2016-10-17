#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter an integer: ");
    
    int num = GetInt();
    
    num *= num;
    
    printf("Your number squared is %d.\n", num);
}