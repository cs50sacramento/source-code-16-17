#include <stdio.h>
#include <cs50.h>

// function declaration
int GetPosInt(void);

int main(void)
{
    // call function to get a positive int and store it in a variable userPosInt
    int userPosInt = GetPosInt();
    
    // print the number given to me by the user
    printf("You entered the number %d.\n", userPosInt);
}

// write a function that asks a user for an integer and reprompts if non-positive
int GetPosInt(void)
{
    int x;
    
    do
    {
        printf("Enter a positive integer please: ");
        x = GetInt();
    } while (x < 1);
    
    return x;
}