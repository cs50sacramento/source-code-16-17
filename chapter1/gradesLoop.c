/* 
*
* Prints letter grade based on percent
* Peter Strawn
* CS50 AP - C Block
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variable for percent
    int percent;

    // use GetInt to get user input and store in variable
    do
    {
        printf("Enter a valid grade: ");
        percent = GetInt();
    } while ((percent < 0) || (percent > 100));
    
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
    else
    {
        printf("You got a D!\n");
    }
}