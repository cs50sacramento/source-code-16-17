/* 
*
* Guessing program for average number of children in US
* Peter Strawn
* CS50 AP - C Block
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variable for amount of kids per family
    int kids;
    
    // prompt user for input
    printf("Average number of children per family in US: ");
    
    // set variable equal to user input
    kids = GetInt();
    
    // if input is equal to 2, tell user he/she is correct
    if (kids == 2)
    {
        printf("That is correct!\n");
    }
    else
    {
        printf("That is incorrect!\n");
    }
}