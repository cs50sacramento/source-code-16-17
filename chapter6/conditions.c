#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variable for percent
    int percent;
    
    // prompt the user for input
    printf("Enter a valid grade: ");
    
    // use GetInt to get user input and store in variable
    percent = GetInt();
    
    // if percent is 90 or above, print A
    if (percent >= 90)
    {
        printf("You got an A!\n");
    }
    else if (percent >= 80)
    {
        printf("You got a B!\n");
    }
    else if (percent >= 70)
    {
        printf("You got a C!\n");
    }
    else if (percent >= 0)
    {
        printf("You got a D!\n");
    }
    else
    {
        printf("You somehow got a negative grade. Sad.\n");
    }
}