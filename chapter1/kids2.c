/* 
*
* Guessing program for average number of children in US
* Peter Strawn
* CS50 AP - F Block
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt the user to guess the number
    printf("Average number of children per family in US: ");
    
    // make an integer and set it equal to user input
    int userGuess = GetInt();
    
    // create a condition to test whether user is right or wrong
    if (userGuess == 2)
    {
        printf("That is correct!\n");
    }
    else
    {
        printf("That is incorrect!\n");
    }
}